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
	
	if (current == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	free_node = current->next;
	current->next = free_node->next;
	free(free_node);
	return (1);
}
