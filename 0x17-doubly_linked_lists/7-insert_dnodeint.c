#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at @idx
 * @h: pointer to pointer to the first node.
 * @n: the value of the new node.
 * @idx: the index of the node.
 * Return: a pointer to the first node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int counter = 0;

	if (new == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (counter == (idx == 0 ? idx : idx - 1))
		{
			if (temp->next != NULL)
			{
				new->next = temp->next;
				temp->next = new;
			}
			else
			new->next = NULL;
			new->prev = temp;
			new->n = n;
			return (*h);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
