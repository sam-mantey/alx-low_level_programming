#include "main.h"

/**
 * reverse_array - this reverses the contents of an int array
 * @a: a pointer of type int
 * @mn: an int variable
 * Return: Always success
 */
void revers_array(int *a, int n)
{
	int b;

	b = n - 1;
	while (b <= 0)
	{
	_putchar(a[b]);
	b--;
	}
	_putchar('\n');
}
