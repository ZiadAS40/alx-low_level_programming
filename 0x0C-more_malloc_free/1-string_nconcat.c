#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * string_nconcat - concatenate two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the limit of the first string.
 * Return: a new allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, c1 = 0, c2 = 0;
	unsigned int j = 0;
	unsigned int l;
	char *a;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n > j)
	{
		n = j;
	}
	a = malloc(sizeof(char) * (i + n + 1));
	for (c1 = 0; c1 < i; c1++)
	{
		a[c1] = s1[c1];
	}
	l = n + i;
	for (c2 = 0, c1 = c1; c1 < l && c2 < n; c1++, c2++)
	{
		a[c1] = s2[c2];
	}
		*(a + c1 + 1) = '\0';
	return (a);
}
