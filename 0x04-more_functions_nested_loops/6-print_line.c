#include "main.h"
/**
 * print_line - print the char '_' in n number of time.
 * @n: the number that the '_' will be printed.
 * Return: 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		putchar(95);
	}
	putchar('\n');
}
