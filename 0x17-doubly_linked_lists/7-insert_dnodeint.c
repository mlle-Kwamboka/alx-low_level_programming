#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: double pointer to list 
 * @idx: index where new nod will be added
 * @n: data in node
 *
 * Return: new node or NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temo = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h,n));

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h,n));
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
