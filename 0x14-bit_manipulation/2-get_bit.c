#include "main.h"

/**
 * get_bit - return the value of the bit of index.
 * @index: the indext of the bit.
 * @n: the number.
 * Return: int.
*/


int get_bit(unsigned long int n, unsigned int index)
{

if (index >= sizeof(unsigned long int) * 8)
return (-1);
if (n & (1UL << index))
return (1);
else
return (0);
}
