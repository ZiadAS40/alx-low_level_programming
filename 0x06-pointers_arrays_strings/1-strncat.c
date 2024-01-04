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
	int g = 0;
	int l = 0;
	int m;

	for (; dest[i] != '\0'; i++)
	{
	g++;
	}
	for (; src[j] != '\0'; j++)
	{
	l++;
	}
	m = g + l;
	int s = 0;

	if (n > l)
	{
		n = l;
	}
	for (; g < m ; g++)
	{
	if (s == l)
	{
		break;
	}
	*(dest + g) = *(src + s);
	s++;
	}
	return (dest);
}
