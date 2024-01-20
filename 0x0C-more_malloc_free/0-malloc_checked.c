#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - create a memory allocation for an intger.
 * b: the intger.
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;
	int i;
	a = &b;
	while (b > 0)
	{
		b /= 10;
		i++;
	}
	a = malloc(i);
	if (a == NULL)
	{
		exit(98);
	}
}
