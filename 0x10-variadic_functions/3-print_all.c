#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
/**
 * print_all - print all kinds of vairables.
 * @format: string.
 *
 * Return: 0.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0, c;
double f;
char *s, arr[5] = {'*', 'c', 'i', 'f', 's'};

va_start(args, format);
while (format[i] != '\0')
{
j = 0;
while (j < 5)
{
if (format[i] == arr[j])
break;
j++;
}
switch (j)
{
case 1:
c = va_arg(args, int);
printf("%c", c);
break;
case 2:
c = va_arg(args, int);
printf("%i", c);
break;
case 3:
f = va_arg(args, double);
printf("%f", f);
break;
case 4:
s = va_arg(args, char *);
printf("%s", s);
break;
}
if (format[i + 1] != '\0' && j != 0)
printf("%s", ", ");
i++;
}
}
