#include "lists.h"

/**
 * print_listint - print list of intgers.
 * @h: listint_t.
 * Return: size_t.
*/


size_t print_listint(const listint_t *h)
{
const listint_t *temp = h;
size_t counter = 0;
while (temp != NULL)
{
putchar(temp->n + '0');
putchar('\n');
counter++;
temp = temp->next;
}
return (counter);
}
