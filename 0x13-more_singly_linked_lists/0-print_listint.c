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
if (temp->n == NULL)
printf("(nil)\n");
else
{
printf("%d\n", temp->n);
}
counter++;
temp = temp->next;
}
return (counter);
}
