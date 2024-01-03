#include "main.h"
/**
 * puts2 - print the second half of the string
 * @str: the string that will be printed
 * Return:0
 */
void puts2(char *str)
{
	int i = 0;

	printf("%c", str[0]);
	for (; str[i] != '\0'; i = i + 2)
	{
		printf("%c", str[i]);
	}
}
