#include <DAC.h> 

void FakeSpiWrite24(int32 value)
{
      output_low(SCK);
      output_bit(SDO, bit_test(value, 23));
    //  delay_cycles(DELAY);
      output_high(SCK);
    //  delay_cycles(DELAY);
      
      output_low(SCK);
      output_bit(SDO, bit_test(value, 22));
    //  delay_cycles(DELAY);
      output_high(SCK);
     // delay_cycles(DELAY);
      
      output_low(SCK);
      output_bit(SDO, bit_test(value, 21));
   //   delay_cycles(DELAY);
      output_high(SCK);
    //  delay_cycles(DELAY);
      
      output_low(SCK);
      output_bit(SDO, bit_test(value, 20));
  //    delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
      
      output_low(SCK);
      output_bit(SDO, bit_test(value, 19));
   //   delay_cycles(DELAY);
      output_high(SCK);
   //   delay_cycles(DELAY);
      
      output_low(SCK);
      output_bit(SDO, bit_test(value, 18));
    //  delay_cycles(DELAY);
      output_high(SCK);
   //   delay_cycles(DELAY);
      
      output_low(SCK);
      output_bit(SDO, bit_test(value, 17));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 16));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 15));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 14));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 13));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 12));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 11));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 10));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 9));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 8));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 7));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 6));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 5));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 4));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 3));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 2));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 1));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
        output_low(SCK);
      output_bit(SDO, bit_test(value, 0));
   //   delay_cycles(DELAY);
      output_high(SCK);
  //    delay_cycles(DELAY);
  
}

void main()
{
   set_tris_b(0);
   output_low(CS);
    unsigned int8 i = 0;
   printf("Started Started Started\n\r");
printf("press any key to initiate SPI transfer\n\r");
      getc();
   while(TRUE)
   {
      while(i < SAMPLES)
      {
                 output_low(CS);
                  FakeSpiWrite24(Table[i]);
                   output_high(CS);
         i++;
      }
      i = 0;
   }

}
