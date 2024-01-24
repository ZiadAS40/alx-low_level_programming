#include <stdio.h>
#include "function_pointers.h"
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
