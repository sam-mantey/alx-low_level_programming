#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - It returns a pointer to an array
 * @width: It is an int
 * @height: an int
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int size,;
	int *d2array;

	if ((width <= 0) || (height <= 0)
	return (NULL);

	size = width * height;
	width = 0;
	height = 0;
	d2array = (int *) malloc(size * sizeof(int));
	if (d2array == 0)
	return (NULL);
	else
	return (d2array);
}	
