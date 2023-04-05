#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop.
 * @head: Parameter (the head of the list).
 *
 * Return: Address of the node where loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowPointer = head, *fastPointer = head;

	while (fastPointer != NULL && fastPointer->next != NULL)
	{
		slowPointer = slowPointer->next;
		fastPointer = fastPointer->next->next;
		if (fastPointer == slowPointer->next)
		{
			return (fastPointer->next);
		}
	}
	return NULL;
}
