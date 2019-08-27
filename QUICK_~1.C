#include <stdio.h>
#include<conio.h>
void quicksort (int [], int, int);

void main()
{
    int l[50];
    int size, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++)
    {
	scanf("%d", &l[i]);
    }
    quicksort(l, 0, size - 1);
    printf("After applying quick sort\n");
    for (i = 0; i < size; i++)
    {
	printf("%d ", l[i]);
    }
    printf("\n");
}
void quicksort(int l[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
	pivot = low;
	i = low;
	j = high;
	while (i < j)
	{
	    while (l[i] <= l[pivot] && i <= high)
	    {
		i++;
	    }
	    while (l[j] > l[pivot] && j >= low)
	    {
		j--;
	    }
	    if (i < j)
	    {
		temp = l[i];
		l[i] = l[j];
		l[j] = temp;
	    }
	}
	temp = l[j];
	l[j] = l[pivot];
	l[pivot] = temp;
	quicksort(l, low, j - 1);
	quicksort(l, j + 1, high);
    }
}