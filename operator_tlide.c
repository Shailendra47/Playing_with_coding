#include <stdio.h>

//OUTPUT FINDING QUESTION
void main()
{
	int a = 3, b;
	a = a++ + ~++a;
	b = ~a;
	printf("%d\n", b);
	printf("%d", a);
}