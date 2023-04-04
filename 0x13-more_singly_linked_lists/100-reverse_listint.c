#include "lists.h"

/**
 * reverse_listint - Function that reverses a list
 * @head: Parameter (the head of the list)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next_node;
	
	previous = NULL;
	next_node = *head;
	
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = next_node;
	}
	*head = previous;
	return (previous);
}
