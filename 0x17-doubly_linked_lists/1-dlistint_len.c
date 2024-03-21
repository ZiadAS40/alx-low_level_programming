#include "lists.h"
/**
 * dlistint_len - get the length of doubly liked list.
 * @h: a pointer to the first node.
 * Return: the size of a list
 * "the number of nodes"
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
