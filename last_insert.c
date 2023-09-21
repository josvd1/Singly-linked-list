#include <stdio.h>
#include <stdlib.h>

//insert un noeud à la fin
void last_insert()
{
	struct node *ptr, *temp;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node));

	if (ptr == NULL)
	{
		printf("\nOVERFLOW !");
	}
	else
	{
		printf("\nEnter Value\n");
		scanf("%d", &item);
		ptr->data = item;

		if (head == NULL)
		{
			ptr -> next = NULL;
			head = ptr;
			printf("\nNode inserted");
		}
		else
		{
			temp = head;
			while (temp -> next != NULL)
			{
				temp = temp -> next;
			}
			temp->next = ptr;
			ptr->next = NULL;
			printf("\nNode Inserted");
		}
	}
}