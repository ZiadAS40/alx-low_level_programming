#include "main.h"

/**
 * get_bit - return the value of the bit of index.
 * @index: the indext of the bit.
 * @n: the number.
 * Return: int.
*/


int get_bit(unsigned long int n, unsigned int index)
{

if (_longPow(2, index) > n)
return (-1);
if (n & (1UL << index))
return (1);
else
return (0);
}

/**
 * _longPow - get the power on two numbers.
 * @base: intger.
 * @exp: intger.
 * Return: intger.
*/
unsigned long int _longPow(int base, int exp)
{
unsigned long int result  = 1;

while (exp > 0)
{
result *= base;
exp--;
}
return (result);
}
