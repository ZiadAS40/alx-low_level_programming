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
int i = 0, j = 0, tmp = 5, c;
double f;
char *s, arr[5] = {'c', 'i', 'f', 's'};

va_start(args, format);
while (format && format[i] != '\0')
{
j = 0, tmp = 5;
while (j < 4)
{
if (format[i] == arr[j])
{
tmp = j;
break;
}
j++;
}
switch (tmp)
{
case 0:
printf("%c", va_arg(args, int));
break;
case 1:
printf("%i", va_arg(args, int));
break;
case 2:
printf("%f", va_arg(args, double);
break;
case 3:
printf("%s", va_arg(args, char *));
break;
}
if (format[i + 1] != '\0' && tmp != 5)
printf("%s", ", ");
i++;
}
printf("\n");
}
