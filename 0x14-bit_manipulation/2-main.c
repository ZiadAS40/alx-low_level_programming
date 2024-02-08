#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 3);
    printf("%d\n", n);
    n = get_bit(86, 6);
    printf("%d\n", n);
    return (0);
}