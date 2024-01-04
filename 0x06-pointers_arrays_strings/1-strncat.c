#include "main.h"
/**
 * _strncat - afunction that concatenates two strings.
 * @dest: the first string.
 * @src: the second string.
 * @n: the number of bytes.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j == n)
		{
			break;
		}
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
