#include "main.h"
/**
 * _memcpy - a function that copies a n byte from source to dest.
 * @dest: the destination memory.
 * @src: the source memory.
 * @n: number of bytes.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
