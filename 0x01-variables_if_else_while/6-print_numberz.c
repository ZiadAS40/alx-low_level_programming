#include <stdio.h>

/**
** Description: main - Prints out a string to stdout.
** Return: 0 if success.
*/

int main(void)
{
	int currentChar;

	for (currentChar = 0 ; currentChar <= 9 ; ++currentChar)
	{
		putchar(currentChar);
	}
	putchar('\n');
	return (0);
}
