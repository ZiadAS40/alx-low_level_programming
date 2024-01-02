#include "main.h"
/**
 * print_rev - a function that print the string by revers
 * @s: the string that will be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	for (; s[i] == '\0'; i++)
	{
		if (s[i] == '\0')
		{
			j = i;
			for (; j >= 0; j--)
				printf("%c", s[j]);
		}
	}
	printf("\n");
}
