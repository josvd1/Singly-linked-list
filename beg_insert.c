//insert un noeud au début

void beg_insert()
{
	struct node *ptr;
	int item;

	ptr = (struct node *) malloc(sizeof(struct node *));

	if (ptr == NULL)
	{
		printf("\nOVERFLOW!\n");
	}
	else
	{
		printf("\nEnter Value:\n");
		scanf("%d", &item);
		ptr->data = item;
		ptr->next = head;
		head = ptr;

		printf("\nNode inserted");
	}
}