/*
 * main.c
 *
 *  Created on: Jan 9, 2025
 *      Author: stoff
 */

#include<stdio.h>

int main(void)
{
	float a,b,c, d;
	printf("Input number for A: ");
	fflush(stdout);
	scanf("%f",&a);

	printf("\nInput number for B: ");
	fflush(stdout);
	scanf("%f",&b);

	printf("\nInput number for C: ");
	fflush(stdout);
	scanf("%f",&c);

	d = a+b+c;

	printf("Average of A, B and C is: %f", d/3);
	fflush(stdout);


	return 0;
}
