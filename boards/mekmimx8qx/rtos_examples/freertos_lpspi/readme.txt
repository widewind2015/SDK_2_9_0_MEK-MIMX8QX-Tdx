A FreeRTOS LPSPI demo for M4 on Colbri iMX8X.

![IMAGE]
(https://github.com/widewind2015/SDK_2_9_0_MEK-MIMX8QX-Tdx/blob/master/boards/mekmimx8qx/rtos_examples/freertos_lpspi/pictures/oled-lcd-col-imx8x-m4.jpg?raw=true)

LCD Module: GMD13001, SPI, 7 wires
SoM: Colibri iMX8QXP 2GB IT
Carrier: Colibri Eva Board
Connection:
GMD13001            Colibri Eva Board
Pin1,GND   <---->   X11.22, GND
Pin2,VDD   <---->   X11.29, 3.3V
Pin3,SCK   <---->   X11.33, SSP_SCLK
Pin4,SDA   <---->   X11.35, SSP_TXD
Pin5,RES   <---->   X11.2, SODIMM19
Pin6,DC    <---->   X11.3, SODIMM21 
Pin7,CS    <---->   X11.32, SSP_FRM 


M4 Debug UART:
Colibri Eva Board
X8.40,RX
X8.41,TX
