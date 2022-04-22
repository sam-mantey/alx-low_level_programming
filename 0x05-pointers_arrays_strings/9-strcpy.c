#include "main.h"

/**
 * _strcpy - copies string from one variable to another
 * @dest: contains string
 * @src: contains string
 * Return: dest scucess
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (i <= '\0')
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
