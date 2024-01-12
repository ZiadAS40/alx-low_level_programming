#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @haystack: string.
 * @needle: substring.
 * Return: neede.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;
int counter = 0;

while (needle[counter] != '\0')
{
counter++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0, k = i; needle[j] != '\0'; j++, k++)
{
if (needle[j] != haystack[k])
{
break;
}
}
if (j == counter)
{
return (needle);
}
}
}
return (0);
}
