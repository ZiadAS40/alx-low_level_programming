#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - create a memory allocation for an intger.
 * @b: the intger.
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	} else
	{
	return (a);
	}
	return (0);
}
