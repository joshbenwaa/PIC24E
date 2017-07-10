#include <24EP256GP202.h>
#device ICSP=1
#use delay(clock=140MHz,crystal=10MHz)

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOJTAG                   //JTAG disabled
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled

#pin_select U1TX=PIN_B6
#pin_select U1RX=PIN_B7
#use rs232(UART1, baud=9600, stream=UART_PORT1)

#BANK_DMA unsigned char Data[21] = "DMA is outputting\n\r";
