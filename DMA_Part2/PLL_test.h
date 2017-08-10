#include <24EP256GP202.h>
#device ICSP=1
#FUSES FRC
#use delay(CLOCK = 7.37M, INTERNAL)
#FUSES NOWDT                     //No Watch Dog Timer
#FUSES NOJTAG                   //JTAG disabled
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled
#define LED PIN_A0
#define DELAY 1

