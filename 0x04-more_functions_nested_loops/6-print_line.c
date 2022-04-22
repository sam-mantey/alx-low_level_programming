#include "main.h"

/**
 * print_line - this function draws a straight line
 * @n: an int
 * Return: Always 0 (success)
 */
void print_line(int n);
{
	int i;

	if (n > 0)
	{
	for (i = 0; i <= n - 1; i++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
	else
	_putchar('\n');
}
