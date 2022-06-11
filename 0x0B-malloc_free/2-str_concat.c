#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - It calculates the length of a string
 * @c: It is a string
 * Return: It returns an int
 */
int _strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
 * *str_concat - This concatenates two strings
 * @s1: Its is a pointer to a string
 * @s2: It is a pointer to the second string
 * Return: It reurns a string
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j, size;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	size = _strlen(s1) + _strlen(s2);
	newstr = (char *) malloc(size * sizeof(char));
	i = 0;
	while (*(s1 + i) != '\0')
	{
	*(newstr + i) = *(s1 + i);
	i++;
	}
	while (*(s2 + j) != '\0')
	{
	*(newstr + i) = *(s2 + j);
	i++;
	j++;
	}
	return (newstr);
}
