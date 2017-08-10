#include <24EP256GP202.h>
#device ICSP=1
#use delay(internal=140000000)

#FUSES HS, NOWDT                    //No Watch Dog Timer
#FUSES NOJTAG                   //JTAG disabled
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled

#use FAST_IO(B)
#define DELAY 0
#define SAMPLES 50      //Multiplied by 3 if split
#define SCK   PIN_B7
#define SDO   PIN_B8
#define SDI   PIN_B9
#define CS    PIN_B6
#define TOGGLE PIN_A0
#pin_select U1TX=PIN_B11
#pin_select U1RX=PIN_B12
#use rs232(UART1, baud=115200, stream=UART_PORT1)

//#use spi(FORCE_HW, MASTER, SPI1, MODE=1, stream=SPI_PORT1, BAUD = 14000000)
const unsigned int32 Table[SAMPLES] =
{0x808000,
0x20900a,
0x209fd4,
0x20af1e,
0x20bda9,
0x20cb3c,
0x20d79e,
0x20e29f,
0x20ec12,
0x20f3d0,
0x20f9bb,
0x20fdbb,
0x20ffbe,
0x20ffbe,
0x20fdbb,
0x20f9bb,
0x20f3d0,
0x20ec12,
0x20e29f,
0x20d79e,
0x20cb3c,
0x20bda9,
0x20af1e,
0x209fd4,
0x20900a,
0x208000,
0x206ff5,
0x20602b,
0x2050e1,
0x204256,
0x2034c3,
0x202861,
0x201d60,
0x2013ed,
0x200c2f,
0x200644,
0x200244,
0x200041,
0x200041,
0x200244,
0x200644,
0x200c2f,
0x2013ed,
0x201d60,
0x202861,
0x2034c3,
0x204256,
0x2050e1,
0x20602b,
0x206ff5
};
