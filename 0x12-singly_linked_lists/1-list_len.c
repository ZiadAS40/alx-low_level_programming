#include "lists.h"
/**
 * list_len - get the number of elements in a list.
 * @h: list_t.
 * Return: size_t
*/
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
