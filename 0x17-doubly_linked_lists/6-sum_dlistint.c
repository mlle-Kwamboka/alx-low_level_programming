#include "lists.h"
/**
 * sum_dlistint - return sum of all the data in a dlinked list
 * @head: pointer to list
 *
 * Return: Sum otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum +=head->n;
		head = head->next;
	}
	return (sum);
}
