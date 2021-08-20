/*
 * Copyright 2017-2019 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: MIMX8QX6xxxFZ
package_id: MIMX8QX6AVLFZ
mcu_data: ksdk2_0
processor_version: 0.0.0
board: MIMX8QX-MEK-REV-B
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "pin_mux.h"
#include "fsl_common.h"
#include "main/imx8qx_pads.h"
#include "svc/pad/pad_api.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'false', coreID: m4}
- pin_list:
  - {pin_num: V32, peripheral: M40__UART0, signal: uart_rx, pin_signal: ADC_IN2, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: V30, peripheral: M40__UART0, signal: uart_tx, pin_signal: ADC_IN3, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AK14, peripheral: LSIO__QSPI0, signal: 'qspi_a_data, 0', pin_signal: QSPI0A_DATA0, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AR13, peripheral: LSIO__QSPI0, signal: 'qspi_a_data, 1', pin_signal: QSPI0A_DATA1, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AJ13, peripheral: LSIO__QSPI0, signal: 'qspi_a_data, 2', pin_signal: QSPI0A_DATA2, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AH12, peripheral: LSIO__QSPI0, signal: 'qspi_a_data, 3', pin_signal: QSPI0A_DATA3, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AL11, peripheral: LSIO__QSPI0, signal: qspi_a_dqs, pin_signal: QSPI0A_DQS, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AP12, peripheral: LSIO__QSPI0, signal: qspi_a_sclk, pin_signal: QSPI0A_SCLK, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AM12, peripheral: LSIO__QSPI0, signal: qspi_a_ss0_b, pin_signal: QSPI0A_SS0_B, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AM10, peripheral: LSIO__QSPI0, signal: 'qspi_b_data, 0', pin_signal: QSPI0B_DATA0, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AL9, peripheral: LSIO__QSPI0, signal: 'qspi_b_data, 1', pin_signal: QSPI0B_DATA1, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AJ11, peripheral: LSIO__QSPI0, signal: 'qspi_b_data, 2', pin_signal: QSPI0B_DATA2, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: AM8, peripheral: LSIO__QSPI0, signal: 'qspi_b_data, 3', pin_signal: QSPI0B_DATA3, PULL: PULL_0, sw_config: sw_config_0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(sc_ipc_t ipc)                          /*!< Function assigned for the core: Cortex-M4F[m4] */
{
  sc_err_t err = SC_ERR_NONE;

  err = sc_pad_set_all(ipc, BOARD_INITPINS_FTDI_M40_UART0_RX_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ADC_IN2 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_FTDI_M40_UART0_TX_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ADC_IN3 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0_DATA0_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0A_DATA0 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0_DATA1_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0A_DATA1 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0_DATA2_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0A_DATA2 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0_DATA3_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0A_DATA3 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0A_DQS_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0A_DQS register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0A_SCLK_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0A_SCLK register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0A_SS0_B_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0A_SS0_B register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0_DATA4_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0B_DATA0 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0_DATA5_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0B_DATA1 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0_DATA6_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0B_DATA2 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_QSPI0_DATA7_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_QSPI0B_DATA3 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
