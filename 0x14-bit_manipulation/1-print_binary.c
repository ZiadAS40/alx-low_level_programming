#include "main.h"
/**
 * print_binary - the conversion of a number to binary.
 * @n: the number.
 * Return: 0.
 */

void print_binary(unsigned long int n)
{
	int i, flag = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
	}
}
