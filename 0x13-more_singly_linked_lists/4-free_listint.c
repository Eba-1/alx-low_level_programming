#include "lists.h"

/**
 * free_list - A function that frees a list
 * @head: Parameter (head of the linked list).
 * Return: Void functions don't return anything.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->n);
		free(current);
	}
}
