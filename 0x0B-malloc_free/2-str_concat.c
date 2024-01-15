#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings with
 * each other in a new memory locaiton.
 * @s1: the first string.
 * @s2: the second string.
 * Return: the concatenated one.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, count;
	char *a;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	a = malloc((i + j + 1) * sizeof(char));
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (count = 0; count < i; count++)
	{
		if (a == NULL)
			return (NULL);
		a[count] = s1[count];
	}
	for (count = 0; count < j; count++, i++)
	{
		if (a == NULL)
			return (NULL);
		a[i] = s2[count];
	}
	return (a);
}
