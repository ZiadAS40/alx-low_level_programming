#include "lists.h"

/**
 * listint_len - get the length of the list.
 * @h: listint_t.
 * Return: size_t.
*/

size_t listint_len(const listint_t *h)
{
const listint_t *temp = h;
size_t counter = 0;

while (temp != NULL)
{
counter++;
temp = temp->next;
}
return (counter);
}
