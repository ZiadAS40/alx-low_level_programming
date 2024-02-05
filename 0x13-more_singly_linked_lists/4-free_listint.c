#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: listint_t.
 * Return: 0.
*/

void free_listint(listint_t *head)
{
listint_t *temp = head;

while (temp != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
}

