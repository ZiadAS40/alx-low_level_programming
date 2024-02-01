#include "lists.h"

/**
 * free_list - frees a list.
 * @head: list_t.
 * Return: 0.
*/

void free_list(list_t *head)
{
list_t *temp = head;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
