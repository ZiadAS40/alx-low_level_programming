#include "search_algos.h"

/**
 * binary_search - apply the binary search
 * on an array to find a specific value.
 * @array: the array to search on.
 * @size: is the size of the array.
 * @value: the value to search about.
 * Return: the first index of the value on seccess
 * if the value is not on the array return -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1, temp_l;
	int m;

	while (L <= R)
	{
		printf("Searching in array:");
		temp_l = L;
		while (temp_l <= R)
		{
			if (temp_l != R)
			printf(" %d,", array[temp_l]);
			else
			printf(" %d\n", array[temp_l]);
			temp_l++;
		}

		m = floor((L + R) / 2);
		if (m > value)
		R = m - 1;
		else if (m < value)
		L = m + 1;
		else
		return (m);
	}
	return (-1);
}
