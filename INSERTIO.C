//INSERTION SORT
#include<stdio.h>
#include<conio.h>
void INSERTION_SORT(int [],int);
void main()
{
	int a[]={11,12,14,13,15},i,n=5;
	clrscr();
	INSERTION_SORT(a, n);
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
void INSERTION_SORT(int a[],int n)
{
	int i,j,temp,count=0;
	for(j=1;j<n;j++)
	{
	   temp=a[j];
	   i=j-1;
	   count++;
		while(temp < a[i] && i>=0)
		{
			a[i+1]=a[i];
			i=i-1;
			count++;
		}
	a[i+1]=temp;
	}
	printf("\n%d\n",count);
}