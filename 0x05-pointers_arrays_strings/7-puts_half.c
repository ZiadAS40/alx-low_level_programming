#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: the string that will be printed
 * Return:0
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	for (; str[i] != '\0'; i++)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	} else
	{
		j = (i - 1) / 2;
	}
	for (; j < i; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
