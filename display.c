#include "linked_functions.h"


void display()
{
	struct node *ptr;
	ptr = head;

	if (ptr == NULL)
	{
		printf("Nothing to print\n");
	}

	else
	{
		printf("\nPrinting values . . .\n");

		while (ptr != NULL)
		{
			printf("%d\n", ptr->data);
			ptr = ptr -> next;
		}
	}
}