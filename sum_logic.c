#include <stdio.h>

//OUTPUT FINDING QUESTION
int main()
{
	int a = 65, b = 66, c;
	//float a = 65, b = 66, c;
	printf("Enter a number\n");
	scanf("%d %d",&a,&b);
	c = a + b;
	printf("%5d %5d %5d", a,b,c);
	return 0;
}