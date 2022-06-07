#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - This creates an array of chars
 * @size: the size of the array
 * @c: It is a char
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
	return (NULL);
	}

	unsigned int j;

	j = 0;
	/*Allocating memory for the array*/
	char *buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
	return (NULL);
	}
	else
	{
	while (j < size)
	{
	*(buffer + j) = c;
	j++;
	}
	return (buffer);
	}
}
