#include "lists.h"
/**
 * print_listint - Function that prints all the
 * elements of a listint_t list.
 * @h: Parameter (the head of the list).
 * Return: Returns the number of nodes.
 */

size_t print_listint(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", current->n);
		h = h->next;
		count++;
	}
	return (count);
}
