#include <stdio.h>

/**
 * main - Prints number of arguments passed to main
 * @argc: It counts the number of arguments passed to main
 * @argv: an array of the arguments passed to main
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
