#include "main.h"

/**
 * string_toupper - changes from lowercase to uppercase
 * @str: it is a string
 * Return: returns a char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	}
	}
	return (str);
}
