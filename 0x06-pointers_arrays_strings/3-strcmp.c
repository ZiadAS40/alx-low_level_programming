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

	while (j == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			{
				break;
			}
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
}
