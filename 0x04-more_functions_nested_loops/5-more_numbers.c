#include "main.h"
/**
 * more_numbers - prints the numbers (0 - 14) ten times.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int j;

	for (j = '0' ; j <= '10' ; j++)
	{
	int i;

	for (i = '0' ; i <= '14' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
