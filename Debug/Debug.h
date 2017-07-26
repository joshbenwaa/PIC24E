#include <24EP256GP202.h>
#device ICSP=1
#use delay(internal=140000000)

#FUSES HS, NOWDT                    //No Watch Dog Timer
#FUSES NOJTAG                   //JTAG disabled
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled


#define LED PIN_A0
#use fast_IO(A)
#define DELAY 30
