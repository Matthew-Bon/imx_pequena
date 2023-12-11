/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v13.1
processor: MCIMX6Z0xxx09
package_id: MCIMX6Z0DVM09
mcu_data: ksdk2_0
processor_version: 13.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"


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
- options: {callFromInitBoot: 'false', coreID: ca7}
- pin_list:
  - {pin_num: A2, peripheral: USDHC1, signal: 'usdhc_data, 3', pin_signal: SD1_DATA3}
  - {pin_num: B2, peripheral: USDHC1, signal: 'usdhc_data, 1', pin_signal: SD1_DATA1}
  - {pin_num: C2, peripheral: USDHC1, signal: usdhc_cmd, pin_signal: SD1_CMD}
  - {pin_num: B1, peripheral: USDHC1, signal: 'usdhc_data, 2', pin_signal: SD1_DATA2}
  - {pin_num: C1, peripheral: USDHC1, signal: usdhc_clk, pin_signal: SD1_CLK}
  - {pin_num: B3, peripheral: USDHC1, signal: 'usdhc_data, 0', pin_signal: SD1_DATA0}
  - {pin_num: G17, peripheral: I2C1, signal: i2c_scl, pin_signal: UART4_TX_DATA}
  - {pin_num: L17, peripheral: I2C1, signal: i2c_sda, pin_signal: GPIO1_IO03}
  - {pin_num: K16, peripheral: UART1, signal: uart_rx, pin_signal: UART1_RX_DATA}
  - {pin_num: K14, peripheral: UART1, signal: uart_tx, pin_signal: UART1_TX_DATA}
  - {pin_num: K15, peripheral: UART1, signal: uart_cts_b, pin_signal: UART1_CTS_B}
  - {pin_num: J14, peripheral: UART1, signal: uart_rts_b, pin_signal: UART1_RTS_B}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-A7[ca7] */
    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO03_I2C1_SDA , 0U);
    IOMUXC_SetPinMux(IOMUXC_SD1_CLK_USDHC1_CLK , 0U);
    IOMUXC_SetPinMux(IOMUXC_SD1_CMD_USDHC1_CMD , 0U);
    IOMUXC_SetPinMux(IOMUXC_SD1_DATA0_USDHC1_DATA0 , 0U);
    IOMUXC_SetPinMux(IOMUXC_SD1_DATA1_USDHC1_DATA1 , 0U);
    IOMUXC_SetPinMux(IOMUXC_SD1_DATA2_USDHC1_DATA2 , 0U);
    IOMUXC_SetPinMux(IOMUXC_SD1_DATA3_USDHC1_DATA3 , 0U);
    IOMUXC_SetPinMux(IOMUXC_UART1_CTS_B_UART1_CTS_B , 0U);
    IOMUXC_SetPinMux(IOMUXC_UART1_RTS_B_UART1_RTS_B , 0U);
    IOMUXC_SetPinMux(IOMUXC_UART1_RX_DATA_UART1_RX , 0U);
    IOMUXC_SetPinMux(IOMUXC_UART1_TX_DATA_UART1_TX , 0U);
    IOMUXC_SetPinMux(IOMUXC_UART4_TX_DATA_I2C1_SCL , 0U);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/