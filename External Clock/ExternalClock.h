#include <24EP256GP202.h>
#device ICSP=1
#fuses HS, PR, NOWDT

#use delay(clock=10000000)  // A 20 Mhz crystal is used






#pin_select U1TX=PIN_B11
#pin_select U1RX=PIN_B12
#use rs232(UART1, baud=9600, stream=UART_PORT1)


