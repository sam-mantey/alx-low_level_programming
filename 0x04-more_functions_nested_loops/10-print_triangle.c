#include "main.h"

/**
 * print_triangles - This prints riaght angled triangles
 * @size: It is an int variable
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int i; j, k;

	if (size > 0)
	{
	for (i = 0; i < siz; i++)
	{
	for (j = size - 1; j > i; i--)
	{
	_putchar(' ');
	}
	for (k = 0; k < i + 1; k++)
	{
	_putchar(95);
	}
	_putchar('\n')
	}
	}
}
