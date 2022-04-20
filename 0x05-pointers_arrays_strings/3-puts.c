#include "main.h"

/**
 * _puts - Prints a string to the stdout
 * @str - contains string
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	int n;
	char *s;

	s = str;
	for (n = 0; s[n]; n++)
	{
	putchar(s[n]);
	}
	_putchar('\n');
}
