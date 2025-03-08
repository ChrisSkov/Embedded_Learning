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
	int32_t firstNumber = 0;
	int32_t secondNumber = 0;
	printf("Input 2 numbers pls: \n");
	scanf("%d", &firstNumber);
	scanf("%d", &secondNumber);
	if(firstNumber != 1 || secondNumber != 1){
		printf("Pls only numbers");
	}
	printf("Bitwise AND of %d and %d = %d\n", firstNumber, secondNumber, firstNumber & secondNumber);
	printf("Bitwise OR of %d and %d = %d\n", firstNumber, secondNumber, firstNumber | secondNumber);
	printf("Bitwise XOR of %d and %d = %d\n", firstNumber, secondNumber, firstNumber ^ secondNumber);
	printf("Bitwise NOT of %d and %d = %d and %d\n", firstNumber, secondNumber, ~firstNumber,  ~secondNumber);
	hangTerminal();
	return 0;
}
