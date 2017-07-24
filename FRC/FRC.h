#include <24EP256GP202.h>
//#device ICSP=1
#use delay(internal=7MHz)
#FUSES FRC
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOJTAG                   //JTAG disabled
#FUSES NOALTI2C1                //I2C1 mapped to SDA1/SCL1 pins
#FUSES NOALTI2C2                //I2C2 mapped to SDA2/SCL2 pins
#FUSES WDTWIN_25%               //Watchdog Window is 25% of WDT period
#FUSES PLLWAIT                  //Clock switch to PLL will wait until the PLL lock signal is valid
#FUSES WINDIS                   //Watch Dog Timer in non-Window mode
#FUSES NOOSCIO                  //OSC2 is clock output
#FUSES IOL1WAY                  //Allows only one reconfiguration of peripheral pins
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled
#FUSES IESO                     //Internal External Switch Over mode enabled
#FUSES NOWRT                    //Program memory not write protected
#FUSES NOPROTECT                //Code not protected from reading

#define LED PIN_A0
#define DELAY 0

