#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n - Contain the input number
 * Reuturn: Always 0
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	_putchar('\n');
	return (n);
}
