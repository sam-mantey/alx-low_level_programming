#include "main.h"

/**
 * _puts_recursion - This prints a string
 * @s: It is a pointer of type char
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(*s + 1);
}
