/*
 * main.c
 *
 *  Created on: Jan 27, 2025
 *      Author: stoff
 */


#include<stdio.h>
#include<stdint.h>

void hangTerminal() {
	while (getchar() != '\n') {
	}
	getchar();
}

int main(void)
{

	int32_t incomeTax = 0;

	printf("Please enter total income: \n");
	scanf("%d", &incomeTax);
	if(incomeTax<=9525 ){
		printf("No tax!");
	}else if (incomeTax>9525 && incomeTax<= 38700){
		printf("Your tax is 12%%. You pay %lf in taxes", incomeTax*0.12);
	}else if(incomeTax>38700 && incomeTax<= 82500){
		printf("Your tax is 22%%. You pay %lf in taxes", incomeTax*0.22);
	}	else {
		printf("Your tax is 32%% + $ 1000. You pay %lf in taxes", incomeTax*0.32 + 1000);
	}


	hangTerminal();
	return 0;
}
