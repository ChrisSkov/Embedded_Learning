/*
 * main.c
 *
 *  Created on: Jan 25, 2025
 *      Author: stoff
 */

#include <stdio.h>

void largerThan(void)
{
	int number1, number2 = 0;
	printf("Input number: ");
	fflush(stdout);
	scanf("%d", &number1);
	printf("Input number: ");
	fflush(stdout);
	scanf("%d", &number2);
	if(number1 == number2){
		printf("numbers are equal");
	}else if(number1>number2){
		printf("%d is larger than %d",number1,number2);
	}else{
		printf("%d is larger than %d",number2,number1);
	}

}

int main(void)
{
	/*int age = 0;

	printf("Input age: ");
	fflush(stdout);
	scanf("%d", &age);

	if(age>= 18)
		printf("You can vote!");
	else
		printf("You can't vote!");*/
	largerThan();
	getchar();
	getchar();
	return 0;
}


