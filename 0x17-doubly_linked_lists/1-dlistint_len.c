#include "lists.h"
/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to linked list
 *
 * Return: Number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	
	if (!h)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

