#include "main.h"
/**
 * print_diagonal - print diagonal line in the terminal.
 * @n: the number of lines in the diagonal.
 * Return: 0
 */
void print_diagonal(int n)
{
		int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <= i; j++)
		{
		putchar(32);
		}
		putchar('\\');
		putchar('\n');
	}
}
