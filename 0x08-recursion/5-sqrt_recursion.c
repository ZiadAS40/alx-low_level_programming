#include "main.h"
/**
 * _sqrt_recursion - main function to get the square root.
 * @n: intger.
 * Return: n.
 */
int _sqrt_recursion(int n)
{
	_sqr(n, 1);
}
/**
 * _sqr - sub function to get the square root.
 * @n: the number.
 * @i: the parameter.
 * Return: square.
 */
int _sqr(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqr(n, i + 1));
}
