#include <stdio.h>

void main()
{
	int p, q, r;
	int si;
	//float si;
	printf("Enter principal rate & time");
	scanf("%d %d %d", &p,&q,&r);
	si = (p * q * r) / 100;	
	//if float 100.0;
	printf("Simple interest is: %d", si); 
}