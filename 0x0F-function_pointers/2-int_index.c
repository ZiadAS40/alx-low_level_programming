#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for intger.
 * @array: array.
 * @size: size of array.
 * @cmp: function pointer.
 * Return: the 1st elemnt that makes cmd true else -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
			return (i);
			}
		}
	return (-1);
	}
	return (0);
}
