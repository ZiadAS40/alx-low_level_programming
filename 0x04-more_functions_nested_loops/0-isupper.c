#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                c = 1;
        }else
        {
                c = 0;
        }
        return c;
}
int main(void)
{
        int c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
