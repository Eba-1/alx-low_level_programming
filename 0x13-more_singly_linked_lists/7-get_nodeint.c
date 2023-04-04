#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node
 * @head: Parameter (the head of the list)
 * @index: Parameter (the index of the node)
 * Return: NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	return (current);
}
