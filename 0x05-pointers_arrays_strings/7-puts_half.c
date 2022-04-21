#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: contains string
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int i, j, f, s;

	i = 0;
	while (i != '\0')
	{
	i++;
	}
	if (i % 2 == 0)
	{
	j = i / 2;
	while (j <= i)
	{
	_putchar(str[j]);
	j++;
	}
	}
	else if (i % 2 != 0)
	{
	j = (i - 1) / 2;
	f = i - j;
	s = f + 1;
	while (s <= i)
	{
	_putchar(str[s]);
	s++;
	}
	}
	_putchar('\n');
}
