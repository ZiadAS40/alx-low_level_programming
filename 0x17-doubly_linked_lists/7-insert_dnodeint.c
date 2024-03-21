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
	dlistint_t *new, *temp = *h;
	unsigned int counter = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp != NULL)
	{
		if (counter == idx - 1)
		{
			if (temp->next != NULL)
				temp->next->prev = new;
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;
			return (new);
		}
		temp = temp->next;
		counter++;
	}
	free(new);
	return (NULL);
}
