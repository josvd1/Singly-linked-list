#include "linked_functions.h"


void random_delete()
{
	struct node *ptr,*ptr1;
	int loc;
	int i;

	printf("\n Enter the location of the node after which you want to perform deletion\n");
	scanf("%d", &loc);

	ptr=head;

	for(i = 0; i < loc; i++)
	{
		ptr1 = ptr;
		ptr = ptr->next;

		if(ptr == NULL)
		{
			printf("\nCan't delete");
			return;
		}
	}

	ptr1 ->next = ptr ->next;
	free(ptr);
	printf("\nDeleted node %d\n", loc + 1);
}