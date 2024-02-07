#include "lists.h"

/**
 * print_listint_safe - print the list even if there is a loop.
 * @head: the first node of the list.
 * Return: the number of the nodes.
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t **arr = malloc(sizeof(listint_t *));
const listint_t *temp = head;
size_t nodes = 0, i;

if (!arr)
{
exit(98);
}
while (temp != NULL)
{
for (i = 0; i < nodes; i++)
{
if (arr[i] == temp)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
free(arr);
return (nodes);
}
}
printf("[%p] %d\n", (void *)temp, temp->n);
arr = realloc(arr, (nodes + 1) * sizeof(listint_t *));
if (!arr)
exit(98);
arr[nodes++] = temp;
temp = temp->next;
}
free(arr);
return (nodes);
}
