#include "lists.h"

/**
 * add_node - add a node at the begging of a list.
 * @head: list_t.
 * @str: char *.
 * Return: list_t.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *temp = malloc(sizeof(list_t));
size_t ln = 0;
if (temp == NULL)
return (NULL);
temp->str = strdup(str);
while (str[ln] != '\0')
ln++;
temp->len = ln;
temp->next = *head;
*head = temp;
return (*head);
}
