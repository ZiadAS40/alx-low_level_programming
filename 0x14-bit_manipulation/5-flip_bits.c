#include "main.h"

/**
 * flip_bits - calculate the number of bits need to
 * change to get the other number.
 * @n: the first number.
 * @m: the second number.
 * Return: the number of bits.
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int i = 0, counter = 0;

    while (i < 64)
    {
        if ((n & (1UL << i)) != (m & (1UL << i)))
        counter++;
        i++;
    }
    return (counter);
}