#include "lists.h"

/**
 * print_list - print all nodes in a list.
 * @h: list_t.
 * Return: size_t.
*/

size_t print_list(const list_t *h)
{
const list_t *temp = h;
size_t n = 0;
while (temp != NULL)
{
if (temp->str != NULL)
printf("[%d] %s\n", temp->len, temp->str);
else
printf("[%d] %s\n", temp->len, "(nil)");
temp = temp->next;
n++;
}
return (n);
}
