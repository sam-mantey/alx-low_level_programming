#include "main.h"

/**
 * _pow_recursion - This finds the result of a number raised to a power
 * @x: the base
 * @y: the exponent
 * Return: the results
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
	return (x);
	}
	else if (y == 0)
	{
	return (1);
	}
	else if (y < 0)
	{
	return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
