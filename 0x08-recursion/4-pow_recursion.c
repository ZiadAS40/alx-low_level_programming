#include "main.h"
/**
 * _pow_recursion - a funtion that get x power y.
 * @x: the first operand.
 * @y: the second operand.
 * Return: x of the power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
