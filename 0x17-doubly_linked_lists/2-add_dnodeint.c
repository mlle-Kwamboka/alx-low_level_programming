#include "lists.h"
/**
 * add_dnodeint - adds a new node at beginnig of a dlinked list
 * @head: double pointer to listt
 * @n: data to be added
 *
 * Return: Address of new element, NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	
	if (!head)
		return NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return NULL;

	new->n = n;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	
	*head = new;

	return (new);
}
