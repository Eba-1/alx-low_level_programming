#include "lists.h"
/**
 * listint_len - Function that returns the number of elements.
 * @h: Parameter (the head of the list)
 * Return: Returns the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
        size_t size = 0;
        const listint_t *current = h;

        while (current != NULL)
        {
                current = current->next;
                size++;
        }
        
        return (size);
}
