#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes nde at index
 * @head: Parameter (the head of the list)
 * @index: Parameter (the index of the node to delete
 * Return: 1 for success, -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head, *free_node;
	
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	for (i = 1; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	current->next = current->next->next;
	return (1);
}
