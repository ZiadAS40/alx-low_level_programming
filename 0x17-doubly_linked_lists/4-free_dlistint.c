#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head: pointer to pointer to the first node.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
