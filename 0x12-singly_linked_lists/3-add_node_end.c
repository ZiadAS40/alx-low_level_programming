#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list.
 * @head: list_t *.
 * @str: char *.
 * Return: list_t *.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmp = *head;
list_t *end = malloc(sizeof(list_t));
if (end == NULL)
return (NULL);
end->str = strdup(str);
end->next = NULL;

if (*head == NULL)
*head = end;
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = end;
}
return (end);
}

