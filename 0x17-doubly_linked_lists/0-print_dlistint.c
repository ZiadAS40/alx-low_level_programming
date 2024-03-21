#include "lists.h"

/**
 * print_dlistint - print a doubly linked list.
 * @h: pointer to the first node.
 * Return: the size of the the node.
 * "numer of nodes"
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
