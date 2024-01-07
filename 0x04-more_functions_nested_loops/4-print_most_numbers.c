#include "main.h"
/**
 * print_most_numbers - Prints the numbers (0 - 9) except (2,4) followed by '\n'.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9' ; i++)
	{
		if (i == '2' || i == '4')
		{
		continue;
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}
