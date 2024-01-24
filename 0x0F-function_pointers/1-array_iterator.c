#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - perform an acion on each element of arrary.
 * @array: the array.
 * @size: the size of it.
 * @action: a funtion pointer.
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
