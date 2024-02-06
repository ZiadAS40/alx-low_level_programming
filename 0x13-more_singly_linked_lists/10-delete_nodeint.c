#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index.
 * @head: the first node.
 * @index: the index of the file.
 * Return: 1 if success
 * -1 if fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = *head;
listint_t *ptr;

if (*head == NULL)
return (-1);
if (index == 0)
{
temp = temp->next;
free((*head));
*head = temp;
return (1);
}
while (temp != NULL && i < index - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL && index != 0)
return (-1);
if (temp->next == NULL)
return (-1);
if (i == index - 1)
{
ptr = temp->next->next;
free(temp->next);
temp->next = ptr;
return (1);
}
return (-1);
}
