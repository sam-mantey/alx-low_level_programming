#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: contains string
 * @ src: contains string
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (i != '\0')
	{
	src[i] = dest[i];
	i++;
	}
	dest[i] = '\0';
	return dest;
}
