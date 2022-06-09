#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node of a dlinked list
 * @head: pointer to list
 * @index: index of node
 * 
 * Return: Address of the node otherwise null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return(head ? head : NULL);
}
