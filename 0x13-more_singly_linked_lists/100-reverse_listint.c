#include "lists.h"

/**
 * reverse_listint - reverse a list.
 * @head: the first node.
 * Return: the first node on the new list.
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *current = *head;
listint_t *next;
if (!head || !*head)
return (NULL);
*head = NULL;
while (current != NULL)
{
next = current->next;
current->next = *head;
*head = current;
current = next;
}
return (*head);
}
