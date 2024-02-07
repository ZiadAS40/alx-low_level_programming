#include "lists.h"

/**
 * print_listint_safe - print the list even if there is a loop.
 * @head: the first node of the list.
 * Return: the number of the nodes.
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp = head;
int i = 0, flag = 0, j;
const listint_t **arr = malloc(64 * sizeof(listint_t *));
if (arr == NULL)
exit(98);
arr[0] = head;
while (temp != NULL)
{
printf("[%p] %d\n", (void *)temp, temp->n);
temp = temp->next;
for (j = 0; j <= i; j++)
{
if (arr[j] == temp)
{
flag = 1;
}
}
i++;
arr[i] = temp;
if (flag)
{
printf("->[%p] %d\n", (void *)temp, temp->n);
break;
}
}
return (i);
}
