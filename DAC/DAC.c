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

void main()
{
   setup_spi(SPI_MASTER | SPI_XMIT_L_TO_H | SPI_SAMPLE_AT_MIDDLE | SPI_SCK_IDLE_HIGH | SPI_MODE_8B | SPI_SS_DISABLED);
   output_low(CS);
    unsigned int16 i = 0;
   printf("Started Started Started\n\r");
//!   enable_interrupts(INT_DMA0);
//!   enable_interrupts(INT_SPI1);
//!   enable_interrupts(INTR_GLOBAL);
   while(TRUE)
   {
      output_low(CS);
      printf("press any key to initiate SPI transfer\n\r");
      getc();
      //output_low(CS);
      SPI_Write(0x00);
      SPI_Write(0x80);
      SPI_Write(0x00);
      SPI_write(0x00);
      output_high(CS);
      delay_us(100);
//!      output_low(CS);
//!      SPI_write(0x00);
//!      SPI_Write(0x20);
//!      SPI_Write(0xFF);
//!      SPI_write(0xFF);
//!      output_high(CS);
//!      while(i < 15000)
//!      {
//!                 output_low(CS);
//!                  SPI_WRITE(Table[i]);
//!                  SPI_WRITE(Table[i+1]);
//!                   SPI_WRITE(Table[i+2]);
//!                   output_high(CS);
//!         getc();
//!         i += 3;
//!      }
//!      printf("DONE\n\r");
//!      i = 0;
   }

}
