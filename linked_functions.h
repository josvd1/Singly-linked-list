#ifndef LINKED_FUNCTIONS_H
#define LINKED_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head;

void beg_insert();

void last_insert();

void random_insert();

void begin_delete();

void last_delete();

void random_delete();

void search();

void display();


#endif