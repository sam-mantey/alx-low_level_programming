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
	int prod;

	if (argc != 3)
	{
	printf("Error\n");
	}
	else if (argc == 2)
	{
	prod = atoi(argv[1]) * atoi(argv[2])
	printf("%d\n", prod);
	}
	return (0);
}
