#include "main.h"

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: this is a pointer of type char
 * Return: an int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
