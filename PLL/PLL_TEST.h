#include <24EP256GP202.h>
#device ICSP=1
#use delay(internal=20MHz)

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOJTAG                   //JTAG disabled
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled

#use FIXED_IO( A_outputs=PIN_A0 )

#define OUT   PIN_A0



