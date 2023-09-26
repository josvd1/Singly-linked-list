#include "linked_functions.h"

void last_delete()
{
	struct node *ptr,*ptr1;

	if(head == NULL)
	{
		printf("\nlist is empty\n");
	}

	else if(head -> next == NULL)
	{
		head = NULL;
		free(head);
		printf("\nOnly node of the list deleted\n");
	}

	else
	{
		ptr = head;

		while(ptr->next != NULL)
		{
			ptr1 = ptr;
			ptr = ptr ->next;
		}
		ptr1->next = NULL;
		free(ptr);
		printf("\nDeleted Node from the last\n");
	}
}