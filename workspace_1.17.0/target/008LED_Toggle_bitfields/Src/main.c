
#include <stdint.h>
#include <stdio.h>
void delay(void) {
	for (uint32_t i = 0; i < 300000; i++)
		;

}

int main(void)
{

	uint32_t volatile *const pGPIODModeReg  =  (uint32_t*)(0x40020C00);
	uint32_t volatile *const pInPutDataReg  =  (uint32_t*)(0x40020C00+0x10);
	uint32_t volatile *const pOutPutDataReg =  (uint32_t*)(0x40020C00+0x14);
	uint32_t volatile *const pClockCtrlReg  =  (uint32_t*)(0x40023800+0x30);
	uint32_t volatile *const pPullupDownReg =  (uint32_t*)(0x40020C00 + 0x0C);

	//1.Enable the peripheral clock of GPIOD peripheral
	*pClockCtrlReg |= (1 << 3);

	// 2.configure PD0,PD1,PD2,PD3 as output (rows)
	*pGPIODModeReg &= ~(0xFF); //clear
	*pGPIODModeReg |= 0x55;   //set

	// 3. configure PD8 , PD9, PD10, PD11 as input (columns)
	*pGPIODModeReg &= ~(0xFF << 16);

	// 4.Enable internal pull-up resistors for PD8 PD9 PD10 PD11
	*pPullupDownReg &= ~(0xFF << 16);
	*pPullupDownReg |= (0x55 << 16);

	while (1)
	{

		// Make all rows HIGH
		*pOutPutDataReg |= 0x0F;

		// Make R1 LOW(PD0)
		*pOutPutDataReg &= ~( 1 << 0);
		//Check C1(PD8) low or high
	    if(!(*pInPutDataReg & ( 1 << 8))){
	    	//key is pressed
	    	delay();
	    	printf("1\n");
	    }

	    //check C2(PD9) low or high
	    if(!(*pInPutDataReg & ( 1 << 9))){
	    	//key is pressed
	    	delay();
	    	printf("2\n");
	    }

	    //check C3(PD10) low or high
	    if(!(*pInPutDataReg & ( 1 << 10))){
	    	//key is pressed
	    	delay();
	    	printf("3\n");
	    }

	    //check C4(PD11) low or high
	    if(!(*pInPutDataReg & ( 1 << 11))){
	    	//key is pressed
	    	delay();
	    	printf("A\n");
	    }
		///////////////////////////////////////////////////////////////////
		// Make all rows HIGH
		*pOutPutDataReg |= 0x0F;
		// Make R2 LOW(PD1)
		* pOutPutDataReg &= ~(1 << 1);

		if (!(*pInPutDataReg & (1 << 8))) {
			//key is press
			delay();
			printf("4\n");

		}

		if (!(*pInPutDataReg & (1 << 9))) {
			//key is press
			delay();
			printf("5\n");

		}

		if (!(*pInPutDataReg & (1 << 10))) {
			//key is press
			delay();
			printf("6\n");

		}

		if (!(*pInPutDataReg & (1 << 11))) {
			//key is press
			delay();
			printf("B\n");

		}

		///////////////////////////////////////////////////////////////////
		// Make all rows HIGH
		*pOutPutDataReg |= 0x0F;
		// Make R3 LOW(PD2)
		* pOutPutDataReg &= ~(1 << 2);
		//check C1(PD8) low or high
		if (!(*pInPutDataReg & (1 << 8))) {
			//key is press
			delay();
			printf("7\n");

		}
		//check C1(PD8) low or high
		if (!(*pInPutDataReg & (1 << 9))) {
			//key is press
			delay();
			printf("8\n");

		}
		//check C1(PD8) low or high
		if (!(*pInPutDataReg & (1 << 10))) {
			//key is press
			delay();
			printf("9\n");

		}
		//check C1(PD8) low or high
		if (!(*pInPutDataReg & (1 << 11))) {
			//key is press
			delay();
			printf("C\n");

		}

		///////////////////////////////////////////////////////////////////
		// make all rows HIGH
		 *pOutPutDataReg  |= 0x0F;
		//make R4 LOW(PD2)
		*pOutPutDataReg  &= ~( 1 << 3);

	    //scan the columns
	    //check C1(PD8) low or high
		if (!(*pInPutDataReg & (1 << 8))){
			//key is press
			delay();
			printf("*\n");

		}

		//check C1(PD8) low or high
		if (!(*pInPutDataReg & (1 << 9))){
			//key is press
			delay();
			printf("0\n");

		}

		//check C1(PD8) low or high
		if (!(*pInPutDataReg & (1 << 10))){
			//key is press
			delay();
			printf("#\n");

		}

		//check C1(PD8) low or high
		if (!(*pInPutDataReg & (1 << 11))){
			//key is press
			delay();
			printf("D\n");

		}

}
}
