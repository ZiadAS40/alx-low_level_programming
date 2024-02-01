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
if (temp == NULL || head == NULL)
return (NULL);
temp->next = *head;
temp->str = strdup(str);
*head = temp;
return (*head);
}
