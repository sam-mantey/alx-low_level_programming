#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes/correct)
 */
int main(void)
{
	char low_alph;
	char upper_alph;

	for (low_alph = 'a'; low_alph <= 'z'; low_alph++)
	{
		putchar(low_alph);
	}
	for (upper_alph = 'A'; upper_alph <= 'Z'; upper_alph++)
	{
		putchar(upper_alph);
	}
	putchar('\n');
	return (0);
}
