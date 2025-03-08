/*
 * main.c
 *
 *  Created on: Jan 28, 2025
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

	int32_t firstNumber ,  secondNumber;
	uint32_t even;


	printf("Input start and end numbers pls: \n");
	scanf("%d %d", &firstNumber, &secondNumber);
	if(firstNumber > secondNumber){
		printf("Second number must be higher than first number");
		hangTerminal();
		return 0;
	}
	printf("Even numbers are: \n");
	even = 0;
	while(firstNumber <= secondNumber)
	{
		if(!(firstNumber%2))
		{
			printf("%4d\t", firstNumber);
			even++;
		}
		firstNumber++;
	}

	printf("\nTotal even number %u \n", even);



	hangTerminal();
	return 0;
}
