#include "lists.h"

/*
 * add_node - Adding a node at the beginning of the list.
 * @head: Parameter (the head opf the list)
 * @str: The value that the node will have.
 * Return: Address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t n;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return(NULL);
	}
	for (n = 0; str[n]; n++);

	newNode->len = n;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;

	return(*head);
}
