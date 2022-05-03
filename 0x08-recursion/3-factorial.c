#include "main.h"

/**
 * factorial - This finds the factorial of a number
 * @n: It is a variable of type int
 * Return: It returns the factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	return (n * factorial(n - 1));
}
