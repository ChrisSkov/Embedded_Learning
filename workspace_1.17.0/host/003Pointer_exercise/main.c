/*
 * main.c
 *
 *  Created on: Jan 17, 2025
 *      Author: stoff
 */


#include<stdio.h>

int main(void)
{
	// create char type var init to 100
	// print address of above var
	// create pointer variable and store address of above var
	// perform read operation to fetch 1 byte of data from pointer
	// print data obtained from read operation on the pointer
	// perform write operation on the pointer to store value 65
	// print value of var define in step 1


	char data = 100;
	printf("Address %p \n", &data);

	char* pAddress = &data;

	char value = *pAddress;

	printf("read value is:  %d \n", value);

	*pAddress = 65;
	printf("Value of var in step 1: %d\n", data);
	return 0;
}
