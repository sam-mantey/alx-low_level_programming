#include "main.h"

/**
 * _strlen - calculates the legth of a string
 * @s: It contains the string
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
