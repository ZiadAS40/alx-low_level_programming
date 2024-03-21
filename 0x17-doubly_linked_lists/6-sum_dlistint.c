#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data on a linked list.
 * @head: pointer to the first node.
 * Return: the summation of the list.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head != NULL)
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
