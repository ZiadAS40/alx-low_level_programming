#include "main.h"
/**
 * _isdigit - A function that checks the digits
 * @c : An inpur digit
 * Return : 1 if a digit
 */
int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
	{
		c = 1;
	} else
	{
		c = 0;
	}
	return (c);
}
