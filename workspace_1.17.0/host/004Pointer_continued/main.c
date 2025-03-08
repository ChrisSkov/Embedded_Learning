/*
 * main.c
 *
 *  Created on: Jan 17, 2025
 *      Author: stoff
 */


#include<stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(void)
{

	char *pAddress1;

	pAddress1 = (char*) &g_data;

	printf("Value at address %p is: %x\n", pAddress1, *pAddress1);

	int *pAddress2;

	pAddress2 = (int*) &g_data;

	printf("Value at address %p is: %x\n", pAddress2, *pAddress2);
	return 0;
}
