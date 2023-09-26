#include "linked_functions.h"


void search()
{
	struct node *ptr;
	int item;
	int i = 0;
	int flag = 0;
	ptr = head;

	if (ptr == NULL)
	{
		printf("\nEmpty List\n");
	}

	else
	{
		printf("\nEnter item which you want to search\n");
		scanf("%d", &item);

		while (ptr != NULL)
		{
			if(ptr->data == item)
			{
				printf("item found at location %d\n", i);
				flag = 1;
			}
			i++;
			ptr = ptr -> next;
		}

		if (flag == 0)
		{
			printf("Item not found\n");
		}
	}
}