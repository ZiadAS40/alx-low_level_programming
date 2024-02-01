#include "lists.h"
/**
 * list_len - get the number of elements in a list.
 * @h: list_t.
 * Return: size_t
*/
size_t list_len(const list_t *h)
{
const list_t *temp = h;
size_t n = 1;
if (temp->next == NULL)
return (0);
while (temp->next != NULL)
{
n++;
temp = temp->next;
}
return (n);
}
