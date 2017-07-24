#include <24EP256GP202.h>
#device icd = true
#device icsp = 1
#FUSES NOWDT, FRC                   //No Watch Dog Timer
#USE DELAY(rc = 8000000)
#FUSES NOJTAG                   //JTAG disabled
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled

#PIN_SELECT REFCLK = PIN_B6
#define LED PIN_A0
#define DELAY 1

