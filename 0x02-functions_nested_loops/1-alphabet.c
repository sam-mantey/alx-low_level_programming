#include "main.h"

/**
 * main - Check the code
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
