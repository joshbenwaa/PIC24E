#include <24EP256GP202.h>
#include <string.h>
//#device icd=true
//#FUSES FRC_PLL
#FUSES HS,PR_PLL

#use delay(xtal = 10MHZ, clock = 140MHz)

#pin_select U1TX = PIN_B11
#pin_select U1RX = PIN_B12
#use RS232(UART1, baud = 115200, stream = UART_PORT1)
//#USE RS232(STREAM=UART1, BAUD = 115200, PARITY = N, BITS = 8, STOP = 1, TIMEOUT = 500, XMIT = PIN_B14, RCV = PIN_B15 ))
#BANK_DMA  unsigned int channel[8][3];
#pin_select INT1 = PIN_B6
//#define SPI_CS PIN_B6
//unsigned int32 channel[8];  
//int channel[8];
 unsigned int rows = 0, cols = 0, bitCount =  0;
//int j = 0;
//#DEFINE ENABLE_INTERRUPTS(PIN_B11);

void clear_channel()
{
   int i = 0, k = 0;
   while(i < 8){
      while(k < 3){
         channel[i][k] = 0;
         k++;
      }
      k = 0;
      i++;
   }
}

void display_matrix(void)
{
   int row = 0, columns = 0;
   for (row=0; row<8; row++)
   {
    for(columns=0; columns<3; columns++)
        {
         printf("%u     ", channel[row][columns]);
        }
      printf("\n\r");
   }
}

#INT_EXT1
void DCLK_interrupt_handler()
{        
         while(rows <= 7){
         //shift bits left for next inputDMA0   DMA channel 0 transfer complete
            channel[rows][cols] <<= 1;
            rows++;
         }
          rows = 0;
          bitCount++;
         //Accept inputs 1 bit at a time
         channel[0][cols] += input(PIN_B0);
         channel[1][cols] += input(PIN_B1);
         channel[2][cols] += input(PIN_B2);
         channel[3][cols] += input(PIN_B3);
         channel[4][cols] += input(PIN_B4);
         channel[5][cols] += input(PIN_B5);
         channel[6][cols] += input(PIN_B8); //B6 Used by interrupt
         channel[7][cols] += input(PIN_B9); //B7 Used by interrupt
         //Possible take whole port at one time???
         //inputPortB = input_b();
        // printf("Bitcount = %u \n\r", bitCount);         
         printf("Data Reading \n\r");
         if (bitCount == 8){
            if(cols == 2){
               //printf("Gets here \n\r" );
               cols = 0;
               //dma_start(0, DMA_ONE_SHOT | DMA_FORCE_NOW, &channel);
               display_matrix();
            }
            else{
               cols++;
            }
            dma_start(0, DMA_ONE_SHOT, &channel,24);
            bitCount = 0;
           // printf("Cols %u \n\r", cols);
         }
         
         
         
//!   else{
//!      printf("24 bits\n\r");
//!      bitCount = 0;
//!      dma_start(0, DMA_ONE_SHOT | DMA_FORCE_NOW, &channel[0]);
//!   }
}


#INT_EXT0
void DRDY_interrupt_handler()
{
   clear_channel();
   CLEAR_INTERRUPT(INT_EXT1);
   ENABLE_INTERRUPTS(INT_EXT1);
   printf("Waiting for Data Clock \n\r");
   //dma_start(0, DMA_ONE_SHOT, &channel,24);
}

#INT_DMA0
void DMA_interrupt_handler()
{
   printf("DMA Transfer Complete \n\r");
   //printf("Channel[0][0] is: %u \n\r", channel[0][0]); 
   //clear_channel();
  
}


void main(){
//#BIT INT0EP = 0x08C2.0;
   delay_ms(500);
   EXT_INT_EDGE(L_TO_H);
   
//   INT0EP = 1; // negative edge
   
   CLEAR_INTERRUPT(INT_EXT0);
   ENABLE_INTERRUPTS(INT_EXT0);
   CLEAR_INTERRUPT(INT_DMA0);
   ENABLE_INTERRUPTS(INT_DMA0);

  // ENABLE_INTERRUPTS(INTR_NORMAL);
   ENABLE_INTERRUPTS(INTR_GLOBAL);
   
   setup_dma(0,DMA_OUT_UART1,DMA_WORD);   
   //dma_start(1,DMA_ONE_SHOT , 0x4000,0);
   //initialize the array
   clear_channel();
   
   printf("Test1 \n\r");
//!  while(count != 5){
//!   output_high(PIN_A0);
//!   delay_ms(100);
//!   output_low(PIN_A0);
//!   delay_ms(100);
//!   printf("Hello, World! \n\r");
//!   count++;
//!   }
   delay_ms(200);
   display_matrix();
   while(1)
   {
      //delay_ms(5000);
      //printf("No \n\r");
      //Value = dma_status(0);
      //printf("DMA status: %u \n\r", Value);
     // dma_start(1,DMA_ONE_SHOT , 0x4000,0);
     
   }
   //printf("ch0 is:%u \n\r",ch0);
   int support = getenv("DMA");
   printf("DMA Valid: %u", support);
}
