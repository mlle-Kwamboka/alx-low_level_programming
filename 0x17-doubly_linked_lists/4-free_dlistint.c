#include "lists.h"
/**
 * free_dlistint - frees dlinked list
 * @head: pointer to listt
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
