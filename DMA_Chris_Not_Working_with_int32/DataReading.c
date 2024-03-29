#include <24EP256GP202.h>
#include <string.h>
//#device icd=true
//#FUSES FRC_PLL
#FUSES HS,PR_PLL

#use delay(xtal = 10MHZ, clock = 140MHz)

#pin_select U1TX = PIN_B11
#pin_select U1RX = PIN_B12
#use RS232(UART1, baud = 9600, stream = UART_PORT1)
//#USE RS232(STREAM=UART1, BAUD = 115200, PARITY = N, BITS = 8, STOP = 1, TIMEOUT = 500, XMIT = PIN_B14, RCV = PIN_B15 ))
#BANK_DMA  int channel[8];
int count, bitCount = 0;
#pin_select INT1 = PIN_B6
//#define SPI_CS PIN_B6
//unsigned int32 channel[8];  
//int channel[8];

int1 flag = 0;
int j = 0;
//#DEFINE ENABLE_INTERRUPTS(PIN_B11);

#INT_EXT1
void DCLK_interrupt_handler()
{  
      if(bitCount != 24){ //while the whole 24 bit data is not recieved
         while(j <= 8){
         //shift bits left for next inputDMA0   DMA channel 0 transfer complete
            channel[j] <<= 1;
            j++;
         }
         j = 0;
         //Accept inputs 1 bit at a time
         channel[0] += input(PIN_B0);
         channel[1] += input(PIN_B1);
         channel[2] += input(PIN_B2);
         channel[3] += input(PIN_B3);
         channel[4] += input(PIN_B4);
         channel[5] += input(PIN_B5);
         channel[6] += input(PIN_B6);
         channel[7] += input(PIN_B7);
         //Possible take whole port at one time???
         //inputPortB = input_b();
         bitCount++;
         printf("Data Reading \n\r");
         if (bitCount == 8 || 16){
            dma_start(0, DMA_ONE_SHOT | DMA_FORCE_NOW, &channel[0]);
         }
   }
   else{
      bitCount = 0;
      dma_start(0, DMA_ONE_SHOT | DMA_FORCE_NOW, &channel[0]);
   }
}


#INT_EXT0
void DRDY_interrupt_handler()
{
   CLEAR_INTERRUPT(INT_EXT1);
   ENABLE_INTERRUPTS(INT_EXT1);
   printf("Waiting for Data Clock \n\r");
   printf("Channel[0] is: %u \n\r", channel[0]); 
}
#INT_DMA0
void DMA_interrupt_handler()
{
   printf("DMA Transfer Complete \n\r");
}
void main(){
//#BIT INT0EP = 0x08C2.0;
   delay_ms(50);
   EXT_INT_EDGE(L_TO_H);
   int Value;
   
//   INT0EP = 1; // negative edge
   
   CLEAR_INTERRUPT(INT_EXT0);
   ENABLE_INTERRUPTS(INT_EXT0);
   CLEAR_INTERRUPT(INT_DMA0);
   ENABLE_INTERRUPTS(INT_DMA0);

  // ENABLE_INTERRUPTS(INTR_NORMAL);
   ENABLE_INTERRUPTS(INTR_GLOBAL);
   
   setup_dma(0,DMA_OUT_UART1,DMA_HALF_INT);   
   //dma_start(1,DMA_ONE_SHOT , 0x4000,0);
   int i = 0;
   //initialize the array
   while(i < 8){
      channel[i] = 0;
      i++;
   }
   
   printf("Test1 \n\r");
//!  while(count != 5){
//!   output_high(PIN_A0);
//!   delay_ms(100);
//!   output_low(PIN_A0);
//!   delay_ms(100);
//!   printf("Hello, World! \n\r");
//!   count++;
//!   }
   while(1)
   {
      delay_ms(2000);
      printf("No \n\r");
      //Value = dma_status(0);
      //printf("DMA status: %u \n\r", Value);
     // dma_start(1,DMA_ONE_SHOT , 0x4000,0);
     
   }
   //printf("ch0 is:%u \n\r",ch0);
   int support = getenv("DMA");
   printf("DMA Valid: %u", support);

}
