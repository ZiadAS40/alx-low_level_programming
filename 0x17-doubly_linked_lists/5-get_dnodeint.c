#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at @index
 * @head: pointer to the first node.
 * @index: the index of the node.
 * Return: a pointer to the first node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (index == counter)
		return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
