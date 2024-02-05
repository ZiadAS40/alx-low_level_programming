#include "lists.h"

/**
 * free_listint2 - set head to NULL.
 * @head: listint_t.
 * Return: 0.
*/

void free_listint2(listint_t **head)
{
listint_t *temp = *head;

while (temp != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
*head = NULL;
}
