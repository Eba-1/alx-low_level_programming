#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a list
 * list_t list
 * @h: Parameter (the head of the list).
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
