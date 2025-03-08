/*
 * main.c
 *
 *  Created on: Jan 27, 2025
 *      Author: stoff
 */


#include<stdio.h>
#include<stdint.h>

void hangTerminal() {
	while (getchar() != '\n') {
	}
	getchar();
}


float calctTriangle(float height, float base){
	return (height*base)/2;
}

float calcCircle(float radius){
	float pi = 3.14159;
	return (radius * radius)*pi;
}

float calcTrapezoid(float area, float base, float height){
	height = height/2;
	return (area+base) * height;
}

float calcSquare(float side){
	return(side*side);

}
int main(void)
{

	/*
	 	  	t: 0x74
			z: 0x7A
			s: 0x73
			c: 0x63
			r: 0x72
	 *
	 *
	 */
	float a,b,h = 0;
	int8_t choice;
	printf("Area calc program.\nCircle    ---> c\nTriangle    ---> t\nSquare    ---> s\nTrapezoid    ---> z\n");
	printf("Enter choice here: \n");
	scanf("%c", &choice);
	   switch (choice) {
	        case 't': //t
	        	printf("Triangle\n");
	        	printf("Enter height: ");
	            scanf("%f", &h);
	            printf("Enter base: ");
	            scanf("%f", &b);
	            printf("area is %f", calctTriangle(h, b));
	            break;
	        case 'z': //z
	        	printf("Trapezoid\n");
	        	printf("Enter height: ");
	        	scanf("%f", &h);
	        	printf("Enter base: ");
	        	scanf("%f", &a);
	        	printf("Enter base2: ");
	        	scanf("%f", &b);
	            printf("area is %f", calcTrapezoid(a, b, h));
	            break;
	        case 's': //s
	        	printf("Square\n");
	        	printf("Enter side: ");
	        	scanf("%f", &a);
	            printf("area is %f", calcSquare(a));
	            break;
	        case 'c': //c
	        	printf("Circle\n");
	        	printf("enter radius: ");
	        	scanf("%f", &a);
	        	printf("area is %f", calcCircle(a));
	        default:
	            printf("Invalid option. Please select t, z, s or c.\n");
	    }
	hangTerminal();
	return 0;
}
