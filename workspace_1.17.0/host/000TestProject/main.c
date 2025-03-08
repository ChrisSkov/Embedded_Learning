/*
 * main.c
 *
 *  Created on: Dec 28, 2024
 *      Author: stoff
 */


#include<stdio.h>

int main(void)
{

	int dist_a_to_b = 160;
	int dist_b_to_c = 40;

	int total = 0;

	total = dist_a_to_b + dist_b_to_c;
	printf("Total distance is: %d", total);

	getchar();
	return 0;
}
