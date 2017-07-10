#include <main_DMA_2.h>

#INT_DMA0
void  dma0_isr(void) 
{

}

#INT_ADC1
void  adc1_isr(void) 
{

}

#INT_DMA1
void  dma1_isr(void) 
{

}



void main()
{


	setup_adc_ports(sAN0, VSS_VDD);
	setup_adc(ADC_CLOCK | ADC_TAD_MUL_2);

	enable_interrupts(INT_DMA0);
	enable_interrupts(INT_ADC1);
	enable_interrupts(INT_DMA1);
	enable_interrupts(INTR_GLOBAL);

	while(TRUE)
	{
		//TODO: User Code
	}

}
