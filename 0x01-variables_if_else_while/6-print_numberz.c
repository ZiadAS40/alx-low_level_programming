#include <stdio.h>

/**
 * main - Prints digits from 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i <= 9; ++i)
    {
        putchar('0' + i);
    }

    putchar('\n');

    return 0;
}

