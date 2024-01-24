#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
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

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
