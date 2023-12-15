#include <stdio.h>

/**
 * main - Prints the alphabet excluding 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char currentChar;

	/* Print alphabet excluding 'q' and 'e' */
	for (currentChar = 'a'; currentChar <= 'z'; ++currentChar)
	{
		if (currentChar != 'q' && currentChar != 'e')
			putchar(currentChar);
	}

	putchar('\n');

	return (0);
}

