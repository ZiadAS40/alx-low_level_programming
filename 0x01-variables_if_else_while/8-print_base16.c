#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char hexDigit;

    for (hexDigit = '0'; hexDigit <= '9'; ++hexDigit)
    {
        putchar(hexDigit);
    }

    for (hexDigit = 'a'; hexDigit <= 'f'; ++hexDigit)
    {
        putchar(hexDigit);
    }

    putchar('\n');

    return (0);
}

