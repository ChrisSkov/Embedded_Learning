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

	int32_t height;


	printf("Input start and end numbers pls: \n");
	scanf("%d", &height);
	if(height<=0)
	{
		printf("Number can't be negative");
		hangTerminal();
	}

	for(int32_t i=1; i<=height; i++)
	{
		for(int32_t j=i; j>0; j--)
		{
				printf("%d ", j);
		}
		printf("\n");
	}


	hangTerminal();
	return 0;
}
