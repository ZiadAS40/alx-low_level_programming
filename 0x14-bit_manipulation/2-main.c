#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 11);
    printf("%d\n", n);
    n = get_bit(98, 0);
    printf("%d\n", n);
    n = get_bit(1025, 0);
    printf("%d\n", n);
    return (0);
}