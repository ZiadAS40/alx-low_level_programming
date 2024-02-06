#include "lists.h"

/**
 * free_listint2 - set head to NULL.
 * @head: listint_t.
 * Return: 0.
*/

void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL *head == NULL)
return;
if ((*head)->next == NULL)
{
free(*head);
return;
}
temp = *head;
while (temp != NULL)
{
temp = temp->next;
free(*head);
*head = temp;
}
*head = NULL;
}
