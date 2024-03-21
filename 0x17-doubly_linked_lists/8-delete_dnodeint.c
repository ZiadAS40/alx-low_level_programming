#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at @index
 * @index: the index of the node.
 * @head: pointer to pointer to the first node.
 * Return: 1 if success
 * -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp;
	dlistint_t *temp_2 = *head;

	if ((*head) == NULL)
		return (-1);
	while (temp_2 != NULL)
	{
		if (counter == index)
		{
			temp = temp_2;
			if (temp_2->prev != NULL)
				temp_2->prev->next = temp_2->next;
			else
				*head = temp_2->next;
			if (temp_2->next != NULL)
				temp_2->next->prev = temp_2->prev;
			free(temp);
			return (1);
		}
		temp_2 = temp_2->next;
		counter++;
	}
	return (-1);
}
