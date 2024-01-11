#include "main.h"
/**
 * is_prime_number - check if the numbers provided are prime or not.
 * @n: number.
 * Return: 1 || 0
 */
int is_prime_number(int n)
{
if ((!(n % 2) && n != 2) || n < 2)
return (0);
return (sub_function(3, n));
}
/**
 * sub_function - just a helper for the prenouis one.
 * @l: number
 * @n: number
 * Return: 1 || 0.
 */
int sub_function(int l, int n)
{
if (n % l == 0)
return (0);
if (n / 2 > l)
return (sub_function(l + 2, n));
return (1);
}
