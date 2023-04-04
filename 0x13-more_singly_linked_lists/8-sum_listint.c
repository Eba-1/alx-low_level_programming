#include "lists.h"

/**
 * sum_listint - Function that returns sum of all elements in list
 * @head: Parameter (the head of the list)
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
