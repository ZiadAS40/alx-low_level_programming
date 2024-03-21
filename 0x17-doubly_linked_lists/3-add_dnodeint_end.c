#include "lists.h"
/**
 * add_dnodeint_end - adding a node in the end of
 * doubly linked list.
 * @head: pointer to pointer to the first node.
 * Return: a pointer to the first node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = (*head);
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	if ((*head) != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->next = NULL;
	new->prev = temp;
	new->n = n;
	if (*head == NULL)
	*head = new;
	return (*head);
}