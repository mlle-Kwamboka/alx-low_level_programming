#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of a dlinked list
 * @head: double pointer to list
 * @n: data in new node
 *
 * Return: address of new element, NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n;

	if (*head)
		return (NULL);
	
	new = malloc(sizeof(dlistint_t));
	
	if(!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next)
		temp->next = new;

	temp->next = new;
	new->prev = temp;

	return (new);
}

