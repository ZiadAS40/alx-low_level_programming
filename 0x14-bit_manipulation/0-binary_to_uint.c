#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int.
 * @b: the stirng of 0, 1.
 * Return: usigned int.
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int counter = 0, result = 0;
int j, i;

while (b[counter] != '\0')
counter++;

for (j = counter - 1, i = 0; j >= 0; j--, i++)
{
if (b[j] == '1')
result += _pow(2, i);
if (b[j] != '0' && b[j] != '1')
return (0);
}
return (result);
}

/**
 * _pow - get the power on two numbers.
 * @base: intger.
 * @exp: intger.
 * Return: intger.
*/
long _pow(int base, int exp)
{
long result  = 1;

while (exp > 0)
{
result *= base;
exp--;
}
return (result);
}
