#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: A pointer to a character that will be changed
 *@s2: A pointer to a character that will also be changed/modified/updated
 *Return: dest
 */

int _strcmp(char *s1, char *s2)

{

char *first = s1;
char *second = s2;


while (*first != '\0' && *second != '\0' && *first == *second)
{
first++;
second++;
}

return (*first - *second);
}
