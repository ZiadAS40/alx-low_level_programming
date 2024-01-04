#include "main.h"
/**
 * reverse_array - a function that reverse an array.
 * @a: the array.
 * @n: the number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int l;

	while (i >= 0)
	{
		if (i == j)
			break;
		l = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = l;
		j--;
		i++;
	}
}
