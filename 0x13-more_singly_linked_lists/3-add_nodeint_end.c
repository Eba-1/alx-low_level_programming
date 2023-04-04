#include "lists.h"

/**
 * add_nodeint_end - Adding a node at the end of the list.
 * @head: Parameter (the head opf the list)
 * @n: The value that the node will have.
 * Return: Address of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	
	newNode->n = n;
	newNode->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = newNode;
	}	
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = newNode;

	return (newNode);
}
