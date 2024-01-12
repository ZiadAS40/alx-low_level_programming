#include "main.h"
/**
 * _strncpy - copieing a string in another with the limit n.
 * @dest: distination string.
 * @src: source string.
 * @n: the bytes that should be copied.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
