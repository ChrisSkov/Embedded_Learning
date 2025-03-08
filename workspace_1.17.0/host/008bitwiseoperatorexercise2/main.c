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

	printf("Input 2 numbers pls: \n");
	//scanf("%d", &firstNumber);
	//scanf("%d", &secondNumber);


	hangTerminal();
	return 0;
}
