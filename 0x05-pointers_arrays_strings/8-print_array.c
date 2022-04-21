#include "main.h"
#include <stdio.h>

/**
 * print_array - It prints the array to the screen
 * @n: It is the size of the array
 * @a: it is the array name
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; n - 2; i++)
	{
	printf("%d, ", a[i]);
	}
	printf("%d\n", a[n -1];
}
