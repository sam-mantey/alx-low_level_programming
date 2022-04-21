#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: contains string
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int i, j,;

	i = 0;
	while (i != '\0')
	{
	i++;
	}
	j = (i + 1) / 2;
	while (j <= i)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
