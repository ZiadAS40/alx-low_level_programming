#include "main.h"
/**
 * print_diagonal - print diagonal line in the terminal.
 * @n: the number of lines in the diagonal.
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n >=0)
	{
	for (i = 0; i < n ; i++)
	{
		_putchar(92);
		if (i == n - 1)
		_putchar('\n');
		for (j = 0; j <= i; j++)
		{
			_putchar(32);
		}
	}
	}else
		_putchar('\n');
}
