#include "main.h"
/**
 * more_numbers - prints the numbers (0 - 14) ten times.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int j;

	for (j = 0 ; j <= 10 ; j++)
	{
		int i;

		for (i = 0 ; i < 15 ; i++)
		{
			if (i > 10)
			{
		_putchar((i/10) + 48);
			}
			_putchar((i%10) + 48);
		}
		_putchar('\n');
	}
}
