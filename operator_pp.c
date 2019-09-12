#include <stdio.h>

//OUTPUT FINDING QUESTION
void main()
{
	int i = 5, j = 2;
	j = j++ + ++i;
	i = ++i + ++j;
	i = i++ + ++j + ++i + ++i + j++;
	printf("%d %d\n", i,j);
}