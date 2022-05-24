#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds integers
 * @argv: this is an array of arguments passed to main
 * @argc: this is the number of argumentds passed to main
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i, j, sum, d;

	d = 0;
	for (i = 1; i < argc; i++)
	{
	if (isdigit(argv[i] == 0))
	{
	d = d + 1;
	}
	}

	if (d >= 1)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	j = 1;
	sum = 0;
	while (j < argc)
	{
	sum = sum + atoi(argv[j]);
	j++;
	}
	printf("%d\n", sum);
	return (0);
	}
}
