#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

//Link list
struct node
{
	int i;
	struct node *next;
};
struct node *getNode()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof (struct node));
	temp->next = NULL;

	printf("Enter value : ");
	scanf("%d", &temp->i);
	return temp;
}
void createList(struct node *temp)
{
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = getNode();
}
void displayList(struct node *temp)
{
	printf("\n\n\tLinked list as below\n\n\t");
	while(temp!=NULL)
	{
		printf("%d ",temp->i);
		temp = temp->next;
	}
}
void main()
{
	struct node *root  = getNode();
	int flag = 1;
	while(flag == 1)
	{
		createList(root);
		printf("\n\nDo you want another memory ?");
		scanf("%d", &flag);
	}
	displayList(root);
	getch();
}