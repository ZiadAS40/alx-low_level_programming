#include "main.h"

/**
 * clear_bit - set the index bit to 0.
 * @n: the number.
 * @index: the index of the bit.
 * Return: the number of bits
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
if (*n & (1UL << index))
{
*n ^= (1UL << index);
}
return (1);
}
