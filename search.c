#include "linked_functions.h"


void search()
{
	struct node *ptr;
	int item;
	int i = 0;
	int flag;
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
				printf("item found at location %d", i+1);
				flag = 0;
			}
			else
			{
				flag = 1;
			}

			i++;
			ptr = ptr -> next;
		}

		if (flag == 1)
		{
			printf("Item not found\n");
		}
	}
}