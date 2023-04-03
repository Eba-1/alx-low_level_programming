#include "lists.h"
/**
 * add_node_end - Adding a node at the beginning of the list.
 * @head: Parameter (the head opf the list)
 * @str: The value that the node will have.
 * Return: Address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t size;
	list_t *current, *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (size = 0; str[size]; size++)
		;

	newNode->len = size;
	newNode->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	
	current->next = newNode;

	return (*head);
}
