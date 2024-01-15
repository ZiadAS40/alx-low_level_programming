#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicated the string in a new memory location.
 * @str: the string to be dulicated.
 * Return: a pointer to anewly location.
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *a;

	while (str[i] != '\0')
	{
		i++;
	}
	a = malloc((i + 1) * sizeof(char));
	if (str[0] == '\0')
		return (0);
	for (j = 0; j < i; j++)
	{
		if (a == NULL)
			return (0);
		a[j] = str[j];
	}
	return (a);
}
