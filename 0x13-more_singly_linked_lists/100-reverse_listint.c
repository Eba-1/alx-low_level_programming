#include "lists.h"

/**
 * reverse_listint - Function that reverses a list
 * head: Parameter (the head of the list)
 * Return: Pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *next_node;

	previous = NULL;
	next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = p;
		previous = *head;
		*head = next_node;
	}

	*head = previous;
	return (*head);
}
