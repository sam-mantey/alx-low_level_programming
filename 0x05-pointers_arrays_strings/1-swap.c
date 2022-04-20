#include "main.h"

/**
 * swap_int - swaps the the values of two integers
 * @a: it is an int pointer variable
 * @b: it is an int pointer variable
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
