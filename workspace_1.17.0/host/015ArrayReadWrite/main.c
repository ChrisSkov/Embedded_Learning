/*
 * main.c
 *
 *  Created on: Feb 11, 2025
 *      Author: stoff
 */


#include <stdio.h>
#include <stdint.h>

void hangTerminal() {
	while (getchar() != '\n') {
	}
	getchar();
}

int main(void) {


	/*uint8_t someData[10] = {*/
	uint32_t ting = 320;
	printf("Ting %d" ,ting);

	hangTerminal();
	return 0;
}
