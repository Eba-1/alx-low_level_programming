#include "lists.h"

/**
 * print_listint - Function that prints all elements
 * @h: Parameter (the head of the list)
 * Return: Returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	listint *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		size++;
	}
	return (size);
}
