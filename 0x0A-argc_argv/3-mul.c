#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: It counts the argument passed to mmain
 * @argv: It is an array of arguments passed to main
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, z;

	if (argc == 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	z = a * b;
	printf("%d\n", z);
	return (0);
	}
	printf("Error\n");
	return (1);
}
