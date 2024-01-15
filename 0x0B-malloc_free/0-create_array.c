#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array and initialize with char.
 * @size: the number of elements on the array.
 * @c: the character on the array.
 * Return: a.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	a = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		if (a == NULL)
			return (0);
		a[i] = c;
	}
	return (a);
}
