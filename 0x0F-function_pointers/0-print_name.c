#include <stdio.h>
#include "function_pointers.h"

/**
 * printn - a function that will be assigned to f pointer.
 * @a: a pointer to string.
 * Return: 0.
 */
void printn(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		putchar(a[i]);
		i++;
	}
}

/**
 * print_name - a function that prints name with function pointer.
 * @name: the name.
 * @f: the function pointer.
 * Return: 0.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
