#include "main.h"
/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		{
		c = 1;
	} else
	{
	c = 0;
	}
	return (c);
}
