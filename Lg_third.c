#include <stdio.h>

//OUTPUT FINDING QUESTION
void main()
{
	int a = 3, b = 0;
	int c = a || b++;
	int d = --a && --b;
	printf("a = %d b = %d c = %d d = %d", a,b,c,d);
}