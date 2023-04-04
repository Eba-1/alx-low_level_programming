#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t list.
 * @head: Parameter (the head of the list).
 * @n: Parameter (the value the node will have).
 * Return: Address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int *n)
{
	list_t *newNode;
	int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = strdup(n);

	for (i = 0; n[i]; i++)
		;

	newNode->len = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
