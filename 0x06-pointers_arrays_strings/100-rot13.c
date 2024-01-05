#include "main.h"
/**
 * rot13 - encode strings using rot13.
 * @s: string.
 * Return: s.
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char m[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = m[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
