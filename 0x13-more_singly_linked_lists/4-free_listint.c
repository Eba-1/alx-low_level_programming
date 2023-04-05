#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 * @head: Parameter (head of the list)
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
