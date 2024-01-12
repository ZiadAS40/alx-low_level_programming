#include "main.h"
/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: a string.
 *@accept: substring.
 *Return: the length.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;
	int counter;
	unsigned int length;

	while (accept[j] != '\0')
	{
		counter++;
		j++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (flag == 1)
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 0;
				length++;
				break;
			}
			if (j == counter - 1)
			{
				flag = 1;
			}
		}
	}
	return (length);
}
