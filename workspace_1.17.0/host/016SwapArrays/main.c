/*
 * main.c
 *
 *  Created on: Feb 13, 2025
 *      Author: stoff
 */


#include <stdio.h>
#include <stdint.h>

void hangTerminal() {
	while (getchar() != '\n') {
	}
	getchar();
}

int main(void)
{

	uint32_t array1Len;
	uint32_t array2Len;
	printf("Input length of Array 1 and 2: ");
	scanf("%d", &array1Len);
	scanf("%d", &array2Len);
	uint32_t array1[array1Len];
	uint32_t array2[array2Len];

	for(uint32_t i=0; i<array1Len;i++)
	{
		printf("\nInput element %d of array 1: ", i);
		scanf("%u", &array1[i] );
	}

	for(uint32_t i=0; i<array2Len;i++)
	{
		printf("\nInput element %d of array 2: ", i);
		scanf("%u", &array2[i] );
	}

	hangTerminal();
	return 0;
}
