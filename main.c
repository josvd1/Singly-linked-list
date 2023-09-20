#include <stdio.h>
#include <stdlib.h>
//mettre les librairies dans un .h
#include "linked_functions.h"

// à mettre struct dans un .h
stuct node
{
	int data;
	struct node *next;
};
struct node *head;

void main()
{
	int choice = 0;

	while (choice != 9)
	{
		printf("Choose one option:\n---\n");
		printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
		printf("\nEnter your choice\n");

		scanf("%d", &choice);


		switch (choice)
		{
			case 1:
				beg_insert();
				break;

			case 2:
				last_insert();
				break;

			case 3:
				random_instert();
				break;

			case 4:
				begin_delete();
				break;

			case 5:
				last_delete();
				break;

			case 6:
				random_delete();
				break;

			case 7:
				search();
				break;

			case 8:
				display();
				break;

			case 9:
				exit(0);
				break;

			default:
				printf("Please enter a valid choice\n");
		}

	}
}