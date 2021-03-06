/*
 * Copyright 2017-2019 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include "board.h"

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

#define BOARD_INITPINS_FTDI_M40_UART0_RX_PERIPHERAL             M40__UART0   /*!< Device name: M40__UART0 */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_SIGNAL                    uart_rx   /*!< M40__UART0 signal: uart_rx */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_PIN_NAME             SCU_GPIO0_00   /*!< Pin name */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_PIN_FUNCTION_ID SC_P_SCU_GPIO0_00   /*!< Pin function id */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_LABEL              "M40_UART0_RX"   /*!< Label */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_NAME               "M40_UART0_RX"   /*!< Identifier name */

#define BOARD_INITPINS_FTDI_M40_UART0_TX_PERIPHERAL             M40__UART0   /*!< Device name: M40__UART0 */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_SIGNAL                    uart_tx   /*!< M40__UART0 signal: uart_tx */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_PIN_NAME             SCU_GPIO0_01   /*!< Pin name */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_PIN_FUNCTION_ID SC_P_SCU_GPIO0_01   /*!< Pin function id */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_LABEL              "M40_UART0_TX"   /*!< Label */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_NAME               "M40_UART0_TX"   /*!< Identifier name */


/* UART2_TX (number AC35), BB_UART2_TX/J13A[29] */
#define BOARD_INITPINS_BB_UART2_TX_GPIO                              LSIO__GPIO1   /*!< GPIO device name: LSIO__GPIO1 */
#define BOARD_INITPINS_BB_UART2_TX_GPIO_PIN                                  23U   /*!< LSIO__GPIO1 pin index: 23 */
#define BOARD_INITPINS_BB_UART2_TX_PIN_NAME                             UART2_TX   /*!< Pin name */
#define BOARD_INITPINS_BB_UART2_TX_PIN_FUNCTION_ID                 SC_P_UART2_TX   /*!< Pin function id */
#define BOARD_INITPINS_BB_UART2_TX_LABEL                  "BB_UART2_TX/J13A[29]"   /*!< Label */
#define BOARD_INITPINS_BB_UART2_TX_NAME                            "BB_UART2_TX"   /*!< Identifier name */

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
