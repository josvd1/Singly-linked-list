#include "linked_functions.h"


void random_insert()
{
	int i;
	int loc;
	int item;

	struct node *ptr, *temp;

	ptr = (struct node *) malloc(sizeof(struct node));

	if (ptr == NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
		printf("\nEnter Element Value");

		scanf("%d", &item);
		ptr->data = item;

		printf("\nEnter the location after which you want to insert\n");

		scanf("\n%d", &loc);
		temp = head;

		for(i = 0; i < loc; i++)
		{
			temp = temp->next;

			if (temp == NULL)
			{
				printf("\ncan't insert\n");
				return;
			}
		}

		ptr ->next = temp ->next;
		temp ->next = ptr;
		printf("\nNode inserted\n");
	}
}