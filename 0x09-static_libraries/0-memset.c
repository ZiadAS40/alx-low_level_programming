#include "main.h"
/**
 * _memset - a function that fill the memory with a cosnt byte.
 * @s: the pointer to the first memory address.
 * @b: the numers of byte.
 * @n: the number of bytes in the memory.
 * Return: s (the pointer).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = (unsigned char)b;
	}
	return (s);
}
