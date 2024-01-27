#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - some all intgers that are passed.
 * @n: intger.
 *
 * Return: intgers
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned int i;
int sum = 0;
int any;

va_start(arg, n);
if (n != 0)
{
for (i = 0; i < n; i++)
{
any = va_arg(arg, int);
sum += any;
}
return (sum);
}
return (0);
}
