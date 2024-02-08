#include "main.h"

/**
 * set_bit - set the index bit to 1.
 * @n: the number.
 * @index: the index that will be modified to 1.
 * Return: 1 on success
 * -1 if fail.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1UL << index));
	return (1);
}
