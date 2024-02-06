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
listint_t *temp = malloc(sizeof(listint_t));

temp->n = n;
if (temp == NULL)
return (NULL);
while (node != NULL && i < idx - 1)
{
node = node->next;
i++;
if (node == NULL)
return (NULL);
}
temp->next = node->next;
node->next = temp;
return (temp);
}
