#include "lists.h"
#include <stdio.h>

/*
 * print_list - a function that prints all the elements of a list.
 * 
 * @h: A parameter (the head of the linked list)
 * 
 * Return: The number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
	}

	return(count);
}
