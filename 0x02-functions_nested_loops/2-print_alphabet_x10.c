#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char aplh;
	int i = 0; 
	
	while (i <= 9)
	{
	for (alph = 'a'; alph <= 'z'; alph++)
	{
	_putchar(alph);
	}
	_putchar('\n');
	}
}
