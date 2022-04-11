#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 * Description: checking if a random number generated is positive or negative
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%i is positive\n", n);
} else if (n < 0)
{
	printf("%i is negative\n", n);
} else if (n == 0)
{
	printf("%i is zero\n", n);
}
return (0);
}
