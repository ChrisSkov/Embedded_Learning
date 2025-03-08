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

struct CarModel{
	unsigned int carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)
{
	struct CarModel car1 = {2021, 15000, 220, 1330};
	struct CarModel car2 = {4031, 35000, 160, 1900.96};

	printf("Car1 = %d \n", car1.carMaxSpeed);
	printf("Car2 = %d \n", car2.carMaxSpeed);




	hangTerminal();
	return 0;
}
