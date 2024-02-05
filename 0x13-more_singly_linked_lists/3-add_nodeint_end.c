#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list.
 * @head: listint_t.
 * @n: int.
 * Return: *listint_t.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp = *head;
listint_t *end = malloc(sizeof(listint_t));

if (end == NULL)
return (NULL);
end->n = n;
end->next = NULL;
if (tmp == NULL)
*head = end;
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = end;
}
return (end);
}
