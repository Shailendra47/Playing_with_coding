#include <stdio.h>

//OUTPUT FINDING QUESTION
void main()
{
	int a = 3;
	printf("\n%d\n", ++(a++));
	//Error:	Lvalue require as increment operand
}