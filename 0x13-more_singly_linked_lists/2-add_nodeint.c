#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t list.
 * @head: Parameter (the head of the list).
 * @n: Parameter (the value the node will have).
 * Return: Address of the new node.
 */

list_t *add_nodeint(list_t **head, const int *n)
{
	list_t *newNode;
	size_t n;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	newNode->len = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
