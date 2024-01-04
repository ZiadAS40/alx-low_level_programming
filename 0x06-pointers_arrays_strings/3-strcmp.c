#include "main.h"
/**
 * _strcmp - a comparison function.
 * @s1: the first string.
 * @s2: the second string.
 * Return: 0 > (s1 == s2) , - > (s1 > s2) , + > (s1 < s2).
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i == j)
	{
		return (0);
	} else if (i > j)
	{
		return (i - j);
	} else if (i < j)
	{
		return (i - j);
	}
}
