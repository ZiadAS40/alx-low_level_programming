#include "main.h"
/**
 * leet - a function that encode the string to 1337.
 * @s: string.
 * Return: s
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char m[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
	for (j = 0 ; j < 5 ; j++)
	{
		if (s[i] == a[j] || s[i] == (a[j] - ('a' - 'A')))
		{
		*(s + i) = *(m + j);
		break;
		}
	}
	i++;
	}
	return (s);
}
