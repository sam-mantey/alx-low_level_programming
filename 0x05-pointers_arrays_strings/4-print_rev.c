#include "main.h"

/**
 * print_rev - reverses string
 * @s: It is a pointer of the variable type char
 * Return: always 0 (succes)
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	j = i - 1;
	while (j >= 0)
	{
	_putchar(s[j]);
	j--;
	}
	_putchar('\n');
}
