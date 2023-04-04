#include "lists.h"

/**
 * reverse_listint - Function that reverses a list
 * @head: Parameter (the head of the list)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *previous = NULL, next_node = head;
	
	while (current != NULL)
	{
		next_node = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	return (previous);
}
