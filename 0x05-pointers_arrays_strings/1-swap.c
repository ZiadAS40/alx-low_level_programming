#include "main.h"
/**
 * swap_int - a function that swaps two intgers values
 * @a: the first intger and suppose to assign to the b
 * @b: the second intger and suppose to assign to the a
 * Return : 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
