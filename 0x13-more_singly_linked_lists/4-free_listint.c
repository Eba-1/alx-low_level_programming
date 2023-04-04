#include "lists.h"

/**
 * freeint_list - A function that frees a list
 * @head: Parameter (head of the linked list).
 * Return: Void functions don't return anything.
 */

void free_listint(listint_t *head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		free(current->n);
		free(current);
		current = current->next;
	}
}
