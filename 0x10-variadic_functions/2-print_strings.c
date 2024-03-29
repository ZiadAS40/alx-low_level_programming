#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings with separator.
 * @separator: string.
 * @n: unsigned intger.
 * Return: 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *value;
va_start(args, n);
for (i = 0; i < n; i++)
{
value =  va_arg(args, char *);
if (value != NULL)
printf("%s", value);
else
printf("(nil)");
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
}
