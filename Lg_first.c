#include <stdio.h>

//OUTPUT FINDING QUESTION
void main()
{
	int a = 0, b = 1;
	int c = a = 5 || b;
	int d = a-- && --b;
	printf("a = %d b = %d c = %d d = %d", a,b,c,d);
}