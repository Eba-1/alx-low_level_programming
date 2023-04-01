#include "lists.h"
/**
 * print_list - Function to print elements of a list.
 * @h: Parameter (head of the list).
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
