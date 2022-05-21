#include <stdio.h>

/**
 * main - Prints arguments passed to main
 * @argc: It is the number of arguments
 * @argv: It is an array o arguments
 * Return: Always 0;
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
