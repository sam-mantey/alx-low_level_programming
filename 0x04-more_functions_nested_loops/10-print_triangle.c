#include "main.h"

/**
 * print_triangles - This prints riaght angled triangles
 * @size: It is an int variable
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int i, j, k, d;

	d = size - 1;
	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = d; j > i; i--)
	{
	_putchar(' ');
	}
	for (k = 0; k < i + 1; k++)
	{
	_putchar(35);
	}
	d--;
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
