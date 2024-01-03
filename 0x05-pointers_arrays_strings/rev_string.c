#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: the string that will be reversed
 * Return : 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int g = 0;
	int l;

	for (; s[i] != 0; i++)
	{
		g++;
	}
	g--;
	for (;j <= g; j++)
	{
		l =*(s + j);
		*(s + j) = *(s + g);
		*(s + g) = l;
		g--;
	}
}
