#include <DAC.h>

#INT_DMA0
void  dma0_isr(void) 
{

}

#INT_SPI1
void  spi1_isr(void) 
{
      printf("TRANSFER COMPLETE\n\r");
}

void FakeSpiWrite(int8 value, int8 delay)
{
   for(int j = 7; j >= 0; j--)
   {
      output_low(SCK);
      output_bit(SDO, bit_test(value, j));
      output_high(SCK);
      delay_cycles(delay);
   }
   output_low(SCK);
}

void main()
{
   output_low(CS);
    unsigned int16 i = 0;
   printf("Started Started Started\n\r");
printf("press any key to initiate SPI transfer\n\r");
      getc();
   while(TRUE)
   {
      while(i < SAMPLES)
      {
                 output_low(CS);
                  FakeSpiWrite(Table[i], 10);
                  FakeSpiWrite(Table[i+1], 10);
                  FakeSpiWrite(Table[i+2], 10);
                   output_high(CS);
         i += 3;
      }
      i = 0;
   }

}
