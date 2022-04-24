#include "main.h"

/**
 * leet - encodes a string
 * @s: it is a string
 * Return: it resturns the encoded string
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == 'a' || s[i] == 'A')
	{
	_putchar(52);
	}
	else if (s[i] == 'e' || s[i] == 'E')
	{
	_putchar(51);
	}
	else if (s[i] == 'o' || s[i] == 'O')
	{
	_putchar(48);
	}
	else if (s[i] == 't' || s[i] == 'T')
	{
	_putchar(55);
	}
	else if (s[i] == 'l' || s[i] == 'L')
	{
	_putchar(49);
	}
	else
	{
	_putchar(s[i]);
	}
	}
	_putchar('\n');
}
