#include "main.h"
/**
 * _puts - print the string
 * @str: the string that will be printed
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		printf("%c\n", str[i]);
	}
}
