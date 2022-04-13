#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Prints all alphabets in lowercase
 * Return: Always 0 (Success/correct)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
