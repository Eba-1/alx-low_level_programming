#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a list
 * @head: Parameter (head of the linked list).
 * Return: Void functions don't return anything.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
