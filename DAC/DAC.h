#include <24EP256GP202.h>
#device ICSP=1
#use delay(internal=140000000)

#FUSES HS, NOWDT                    //No Watch Dog Timer
#FUSES NOJTAG                   //JTAG disabled
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled

#use FAST_IO(B)
#define DELAY 0
#define SAMPLES 38      //Multiplied by 3 if split
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
{0xC08000,
0x209511,
0x20a98f,
0x20bceb,
0x20ce9e,
0x20de2b,
0x20eb27,
0x20f537,
0x20fc14,
0x20ff8f,
0x20ff8f,
0x20fc14,
0x20f537,
0x20eb27,
0x20de2b,
0x20ce9e,
0x20bceb,
0x20a98f,
0x209511,
0x208000,
0x206aee,
0x205670,
0x204314,
0x203161,
0x2021d4,
0x2014d8,
0x200ac8,
0x2003eb,
0x200070,
0x200070,
0x2003eb,
0x200ac8,
0x2014d8,
0x2021d4,
0x203161,
0x204314,
0x205670,
0x206aee
};
