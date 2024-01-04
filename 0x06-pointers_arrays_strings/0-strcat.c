#include "main.h"
/**
 * _strcat - afunction that concatenates two strings.
 * @dest: the first string.
 * @src: the second string.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
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

	for (; g < m ; g++)
	{
		if (s == l + 1)
	{
		break;
	}
	*(dest + g) = *(src + s);
	s++;
	}
	return (dest);
}
