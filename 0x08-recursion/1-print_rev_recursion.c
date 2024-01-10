#include "main.h"
/**
 * _print_rev_recursion - a function that print the string in reverse order.
 * @s: the string.
 * Return: s.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
