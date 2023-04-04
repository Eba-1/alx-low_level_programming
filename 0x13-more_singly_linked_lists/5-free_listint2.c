#include "lists.h"

/**
 * freeint_list2 - A function that frees a list
 * @head: Parameter (head of the linked list).
 * Return: Void functions don't return anything.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;		
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
