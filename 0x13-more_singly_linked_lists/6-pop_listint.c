#include "lists.h"

/**
 * pop_listint - deletes the first node on the list.
 * @head: listint_t.
 * Return: intger.
*/

int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int n;

if (head == NULL)
printf("%s\n", "(nil)");
else
{
temp = temp->next;
n = (*head)->n;
free(*head);
*head = temp;
}
return (n);
}
