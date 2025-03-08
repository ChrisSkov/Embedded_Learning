
#include <stdint.h>
#include <stdio.h>
void delay(void) {
	for (uint32_t i = 0; i < 300000; i++)
		;

}

int main(void)
{

	uint32_t volatile *const pGPIODModeReg  =  (uint32_t*)(0x40020C00);
	uint32_t volatile *const pOutPutDataReg =  (uint32_t*)(0x40020C00+0x14);
	uint32_t volatile *const pClockCtrlReg  =  (uint32_t*)(0x40023800+0x30);

	//1.Enable the peripheral clock of GPIOD peripheral
	*pClockCtrlReg |= (1 << 3);

	// 2.configure PD0,PD1,PD2,PD3 as output (rows)
	*pGPIODModeReg &= ~(0x01); //clear
	*pGPIODModeReg |= 0x01;   //set

	while (1)
	{
		// Make PD0 high
		*pOutPutDataReg |= 0x01;


		// Make PD0 low

		//*pOutPutDataReg &= ~( 1 << 0);


	}
}
