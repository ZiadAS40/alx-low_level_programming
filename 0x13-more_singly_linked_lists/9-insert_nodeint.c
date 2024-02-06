#include "lists.h"
/**
 * insert_nodeint_at_index - isert a new node at a given position.
 * @head: -> first node.
 * @idx: the index of the new node.
 * @n: the content of the new node.
 * Return: ->listint_t.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *node = *head;
listint_t *temp;

while (node != NULL && i < idx - 1)
{
node = node->next;
i++;
}
if (node == NULL && idx != 0)
return (NULL);
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
if (idx == 0)
{
temp->next = *head;
*head = temp;
}
else
{
temp->next = node->next;
node->next = temp;
}
return (temp);
}
