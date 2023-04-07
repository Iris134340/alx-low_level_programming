#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 *
 * @x: base number
 * @y: exponent
 *
 * Return: -1 if y < 0 and the result of x raised to y else
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
