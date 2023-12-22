#include "main.h"
/**
 * print_numbers - Prints the numbers (0-9) except (2,4) followed by new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i != '2' || i != '4')
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
