#include <main_DMA.h>

#INT_DMA0
void  dma0_isr(void) 
{
   printf("TRANSFERED\n\r");
}



void main()
{
   setup_dma(0,DMA_OUT_UART1,DMA_BYTE);
   enable_interrupts(INT_DMA0);
   enable_interrupts(INTR_GLOBAL);

   while(TRUE)
   {
     delay_ms(500);
     dma_start(0, DMA_ONE_SHOT | DMA_FORCE_NOW, &Data[0]); //The DMA_FORCE_NOW option causes the transfer to happen immediately, otherwise the DMA waits until the peripheral requests it.
   }

}
