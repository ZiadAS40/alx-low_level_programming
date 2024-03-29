#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node.
 * @head: listint_t.
 * @index: usigned int.
 * Return: listint_t *.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

while (i < index && head != NULL)
{
head = head->next;
i++;
}
return (head);
}
