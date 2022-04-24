#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer that contains string
 * @src: a pointer that contains string
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';

	return (dest);
}
