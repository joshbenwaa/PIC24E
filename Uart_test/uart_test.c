#include <uart_test.h>


void main()
{

   //setup_uart(9600,UART_PORT1);

   //Example blinking LED program
   while(true)
   {
      output_low(LED);
      printf("Led Low\n\r");
      delay_ms(DELAY);
      output_high(LED);
      printf("Led High\n\r");
      delay_ms(DELAY);
   }

}
