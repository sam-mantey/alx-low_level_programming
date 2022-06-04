#include "main.h"

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

	char *array;
	int j;

	j = 0;
	/*Allocating memory for the array*/
	array = (char *) malloc(size * sizeof(c));
	if (array == 0)
	{
	return (NULL);
	}
	else
	{
	while (j < size)
	{
	*(array + j) = c;
	j++;
	}
	return (array);
	}
}
