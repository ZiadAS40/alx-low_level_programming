#include "main.h"
/**
 * _strlen - a function that count the lengh of the string
 * @s: the string that we should count
 * Return: the lengh of the string
 */
int _strlen(char *s)
{
	int counter;

	for (int i = 0; s[i] != '\0'; i++)
	{
		counter++;
		return (counter);
	}
}
