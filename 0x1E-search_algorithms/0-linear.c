#include "search_algos.h"

/**
 * linear_search - apply the linear search on an
 * array to find a specific number.
 * @array: the array to be searched in.
 * @size: the size of the array.
 * @value: the value to search of.
 * Return: the first index of the value
 * in the value in not present on the array -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return ((int)i);
	}
	return (-1);
}
