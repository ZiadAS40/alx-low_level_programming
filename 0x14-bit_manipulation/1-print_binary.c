#include "main.h"
/**
 * print_binary - the conversion of a number to binary.
 * @n: the number.
 * Return: 0.
*/

void print_binary(unsigned long int n)
{
unsigned long int powerOfTwo;
int power = sizeof(unsigned int) * 8 - 1, counter = 0, flag = 0;

if (n == 0)
{
putchar('0');
}
while (power >= 0)
{
powerOfTwo = _longPow(2, power);
if (n >= powerOfTwo)
{
putchar('1');
n -= powerOfTwo;
flag = 1;
counter++;
}
else if (flag)
{
putchar('0');
counter++;
}
power--;
}
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
