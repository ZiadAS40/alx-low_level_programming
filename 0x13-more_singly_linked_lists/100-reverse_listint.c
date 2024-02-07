#include "lists.h"

/**
 * reverse_listint - reverse a list.
 * @head: the first node.
 * Return: the first node on the new list.
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *temp = *head;
listint_t *tempTwo = (*head)->next;

if (*head != NULL)
{
while (tempTwo != NULL)
{
temp = temp->next;
if (tempTwo == (*head)->next)
{
(*head)->next = NULL;
}
tempTwo = tempTwo->next;
temp->next = *head;
*head = temp;
temp = tempTwo;
if (tempTwo != NULL)
tempTwo = tempTwo->next;
}
return (temp);
}
return (NULL);
}
