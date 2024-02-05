#include "lists.h"

/**
 * add_nodeint - add a node at the first of the list.
 * @head: listint_t.
 * @n: int.
 * Return: listint_t *.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp = malloc(sizeof(listint_t));

if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = *head;
*head = temp;
return (*head);
}
