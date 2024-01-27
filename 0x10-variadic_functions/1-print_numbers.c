#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers with separator.
 * @separator: string.
 * @n: unsigned intger.
 * Return: 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int value;
va_start(args, n);
for (i = 0; i < n; i++)
{
value =  va_arg(args, unsigned int);
printf("%d", value);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
}
