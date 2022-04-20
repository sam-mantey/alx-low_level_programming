#include "main.h"

/**
 * _puts - Prints a string to the stdout
 *
 * Return: Always 0 (success)
 */
void _puts(car *str)
{
	int n;
	char s;

	s = str;
	for (n = 0; s[n]; n++)
	{
	_putchar(s[n]);
	}
	_putchar('\n');
}
