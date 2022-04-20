#include "main.h"

/**
 * reset_to_98 - Differencing the a pointer
 *
 * Return: Always 0 (success)
 */
void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
