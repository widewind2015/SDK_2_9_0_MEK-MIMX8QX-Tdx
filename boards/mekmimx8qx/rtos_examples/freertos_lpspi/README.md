A FreeRTOS LPSPI demo for M4 on Colbri iMX8X.

![IMAGE](https://github.com/widewind2015/SDK_2_9_0_MEK-MIMX8QX-Tdx/blob/master/boards/mekmimx8qx/rtos_examples/freertos_lpspi/pictures/oled-lcd-col-imx8x-m4.jpg)

LCD Module: GMD13001, SPI, 7 wires

SoM: Colibri iMX8QXP 2GB IT

Carrier: Colibri Eva Board

Connection:

|GMD13001            |Colibri Eva Board|
| ----------- | ----------- |
|Pin1,GND   |   X11.22, GND|
|Pin2,VDD   |   X11.29, 3.3V|
|Pin3,SCK   |   X11.33, SSP_SCLK|
|Pin4,SDA   |   X11.35, SSP_TXD|
|Pin5,RES   |   X11.2, SODIMM19|
|Pin6,DC    |   X11.3, SODIMM21| 
|Pin7,CS    |   X11.32, SSP_FRM| 


M4 Debug UART:
Colibri Eva Board
X8.40,RX
X8.41,TX

M4 firmware is loaded by u-boot and Linux kernel on A35 cores is not started. 
```
Colibri iMX8X #   print m4boot_test
m4boot_test=tftp ${loadaddr} m4_0.bin; dcache flush; bootaux ${loadaddr} 0
Colibri iMX8X # run m4boot_test
Using ethernet@5b040000 device
TFTP from server 192.168.20.132; our IP address is 192.168.20.111
Filename 'm4_0.bin'.
Load address: 0x89000000
Loading: ##################################################  17.3 KiB
         1.7 MiB/s
done
Bytes transferred = 17720 (4538 hex)
Power on aux core 0
Copy image from 0x89000000 to 0x34fe0000
Start M4
bootaux complete
```