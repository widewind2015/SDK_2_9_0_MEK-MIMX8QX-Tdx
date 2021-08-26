/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* FreeRTOS kernel includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "timers.h"

/* Freescale includes. */
#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"

#include "fsl_lpuart.h"
#include "fsl_lpspi_freertos.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* Task priorities. */
#define spi_PRIORITY (configMAX_PRIORITIES - 1)
#define LPUART_CLK_FREQ   CLOCK_GetIpFreq(kCLOCK_DMA_Lpspi2)
/*******************************************************************************
 * Prototypes
 ******************************************************************************/
static void spi_task(void *pvParameters);

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Application entry point.
 */

lpspi_rtos_handle_t handle;

lpspi_master_config_t lpspi_config = {
    .baudRate = 6000000,
    .bitsPerFrame = 1024,
    .cpol = kLPSPI_ClockPolarityActiveLow,
    .cpha = kLPSPI_ClockPhaseSecondEdge,
    .direction = kLPSPI_MsbFirst,
    .pcsToSckDelayInNanoSec = 50,
    .lastSckToPcsDelayInNanoSec = 50,
    .betweenTransferDelayInNanoSec = 50,
    .whichPcs = kLPSPI_Pcs0,
    .pcsActiveHighOrLow = kLPSPI_PcsActiveLow,
    .pinCfg = kLPSPI_SdiInSdoOut,
    .dataOutConfig = kLpspiDataOutRetained,
};

uint8_t send_buffer[128];
uint8_t recv_buffer[128];
lpspi_transfer_t spi_data = {
    .txData = send_buffer,
    .rxData = recv_buffer,
    .dataSize = sizeof(send_buffer),
    .configFlags = kLPSPI_MasterPcs0 | kLPSPI_MasterPcsContinuous | kLPSPI_MasterByteSwap,
};



int main(void)
{
    /* Init board hardware. */
    sc_ipc_t ipc;

    ipc = BOARD_InitRpc();
    BOARD_InitPins(ipc);
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
    BOARD_InitMemory();

    if (sc_pm_set_resource_power_mode(ipc, SC_R_SPI_2, SC_PM_PW_MODE_ON) != SC_ERR_NONE)
    {
        PRINTF("Error: Failed to power on SPI2\r\n");
    }

    sc_pm_clock_enable(ipc, SC_R_SPI_2, SC_PM_CLK_PER, true, 0);

    if (CLOCK_SetIpFreq(kCLOCK_DMA_Lpspi2, SC_60MHZ) == 0)
    {
        PRINTF("Error: Failed to set SPI2 frequency\r\n");
    }
    
    //NVIC_SetPriority(ADMA_SPI2_INT_IRQn, 5);

    //PRINTF("Basic Init Finised.\r\n");

    if (xTaskCreate(spi_task, "spi_task", configMINIMAL_STACK_SIZE + 100, NULL, spi_PRIORITY, NULL) !=
        pdPASS)
    {
        PRINTF("Task creation failed!.\r\n");
        while (1)
            ;
    }
    vTaskStartScheduler();
    for (;;)
        ;
}

/*!
 * @brief Task responsible for printing of "Hello world." message.
 */
static void spi_task(void *pvParameters)
{
    if (kStatus_Success != LPSPI_RTOS_Init(&handle, ADMA__LPSPI2, &lpspi_config, LPUART_CLK_FREQ))
    {
        PRINTF("Failed to init SPI2.\r\n");
        vTaskSuspend(NULL);
    }
    PRINTF("LPSPI_RTOS_Init finish\r\n");

    if (kStatus_Success != LPSPI_RTOS_TransferBlocking(&handle, &spi_data))
    {
        PRINTF("Failed to send data on SPI2.\r\n");
        vTaskSuspend(NULL);
    }
    PRINTF("LPSPI_RTOS_Transfer finish\r\n");
    
    for (;;)
    {
        PRINTF("Hello world.\r\n");
        vTaskSuspend(NULL);
    }
}
