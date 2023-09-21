#include <stdio.h>
#include <stdlib.h>

void begin_delete()
{
	struct node *ptr;

	if (head == NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		ptr = head;
		head = ptr ->next;
		free(ptr);
		printf("\nNode deleted from the begining\n");
	}
}