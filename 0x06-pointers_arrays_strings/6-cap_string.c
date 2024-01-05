#include "main.h"
/**
 * cap_string - captalize the first char in the word.
 * @s: string.
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + i) >= 'a' && *(s + i) <= 'z')
	{
		*(s + i) = *(s + i) - ('a' - 'A');
	}
	i++;
	for (; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 13 ; j++)
		{
			if (*(s + i) == a[j])
			{
				if (*(s + (i + 1)) >= 'a' && *(s + (i + 1)) <= 'z')
				{
				*(s + (i + 1)) = *(s + (i + 1)) - ('a' - 'A');
				break;
				}
			}
		}
	}
	return (s);
}
