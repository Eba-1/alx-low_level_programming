#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/*
 * list_len - A function to find the length of a linked list.
 * list_t list
 * @h: Parameter (the head of the linked  list)
 * Return: Return the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return(count);
}
