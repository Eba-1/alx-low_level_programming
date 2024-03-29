#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t list.
 * @head: Parameter (the head of the list).
 * @n: Parameter (the value the node will have).
 * Return: Address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	newNode = malloc(sizeof(listint_t));
	
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
