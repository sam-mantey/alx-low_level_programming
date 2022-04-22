#include "main.h"

/**
 * print_square - Printing squares
 * @size: int variable
 * Return: Always 0 (success)
 */
void print_squares(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar(35);
	}
	_putchar(35);
	}
	}
	else
	{
	_putchar('\n');
	}
	_putchar('\n');
}
