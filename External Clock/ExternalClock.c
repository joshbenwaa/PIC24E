#include <ExternalClock.h>
#INT_OSCFAIL
void  oscfail_isr(void) 
{
   printf("OSC FAILED \n\r");
}



void main()
{
   printf("BEGIN BEGIN BEGIN \n\r");
   //setup_oscillator(OSC_RC, 140000000);
   enable_interrupts(INTR_GLOBAL);

   while(TRUE)
   {
      Output_toggle(PIN_A0);
   }

}
