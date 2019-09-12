#include <stdio.h>

//OUTPUT FINDING QUESTION
void main()
{
	int a = 1;
	int b = 1;
	int c = a || --b;
	int d = a-- && b--;
	printf("\na = %d,\tb = %d,\tc = %d,\td = %d\n", a,b,c,d);
}