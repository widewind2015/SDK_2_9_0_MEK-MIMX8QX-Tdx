/*
 * Copyright 2017-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include "board.h"

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/* ADC_IN2 (coord V32), M40_UART0_RX */
#define BOARD_INITPINS_M40_UART0_RX_PIN_FUNCTION_ID                 SC_P_SCU_GPIO0_00   /*!< Pin function id */

/* ADC_IN3 (coord V30), M40_UART0_TX */
#define BOARD_INITPINS_M40_UART0_TX_PIN_FUNCTION_ID                 SC_P_SCU_GPIO0_01   /*!< Pin function id */

#define BOARD_INITPINS_SPI2_MOSI_PIN_FUNCTION_ID                 SC_P_SPI2_SDO
#define BOARD_INITPINS_SPI2_MISO_PIN_FUNCTION_ID                 SC_P_SPI2_SDI
#define BOARD_INITPINS_SPI2_CLK_PIN_FUNCTION_ID                  SC_P_SPI2_SCK
#define BOARD_INITPINS_SPI2_CS0_PIN_FUNCTION_ID                  SC_P_SPI2_CS0

#define BOARD_INITPINS_BB_UART2_TX_PIN_FUNCTION_ID                 SC_P_UART2_TX 
#define BOARD_INITPINS_BB_UART2_RX_PIN_FUNCTION_ID                 SC_P_UART2_RX 

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 * @param ipc scfw ipchandle.
 *
 */
void BOARD_InitPins(sc_ipc_t ipc);                         /*!< Function assigned for the core: Cortex-M4F[m4] */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
