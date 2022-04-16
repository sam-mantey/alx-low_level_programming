#include "main.h"

/**
 * print_most_numbers - Prints without 2 and 4
 *
 * Return: Always 0 (Success/correct)
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
	if (i == 2 || i == 4 )
	{
	continue;
	}
	i++;
	_putchar(i);
	}
	_putchar('\n');
}
