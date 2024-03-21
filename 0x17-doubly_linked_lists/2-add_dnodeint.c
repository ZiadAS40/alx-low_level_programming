#include "lists.h"
/**
 * add_dnodeint - adding a new node at the begging
 * of a list
 * @n: the value of the node.
 * @head: a pointer to pointer to the first node
 * Return: pointer to the first node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
