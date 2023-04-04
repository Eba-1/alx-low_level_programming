#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a list.
 * @head: Parameter (the head of the list)
 * Return: 0 - if list is empty, head node's data if not
 */

int pop_listint(listint_t **head)
{
	int res;
	listint_t *current;

	current = *head;
	if ((*head) == NULL)
	{
		return (0);
	}
	*head = current->next;
	res = current->n;
	free(current);
	return (res);
}
