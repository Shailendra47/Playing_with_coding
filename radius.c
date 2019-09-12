//Q. Write a program to area & circumference of a number?

#include <stdio.h>
#include <math.h>

void main()
{
	float pi = 3.14;
	float a, c, r;
	//const float pi = 3.14;
	printf("Enter Radius & Circumference");
	scanf("%f", &r);
	a = 3.14 * r * r;
	//a = 22 / 7 * r * r;
	c = 2 * 3.14 * r;
	//c = 2 * 22 / 7 * r;
	printf("Radius & Circumference is\n %f %f", a,c); 
}