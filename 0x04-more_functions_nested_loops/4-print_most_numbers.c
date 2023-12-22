#include "main.h"
/**
 * print_numbers - Prints the numbers (0 - 9) except (2,4) followed by new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9' ; i++)
	{
		if (i == '2' || i== '4')
		{
		break
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}
