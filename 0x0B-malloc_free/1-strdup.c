#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the char to work on
 * Return: It returns an int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
 * _strcpy - copies a string
 * @nwstr: Its is a duplicate
 * @sr: Its the original string
 * Return: It returns a string
 */
char *_strcpy(char *nwstr, char *sr)
{
	int j;

	j = 0;
	while (sr[j] != '\0')
	{
	nwstr[j] = sr[j];
	j++;
	}
	nwstr[j] = '\0';
	return (nwstr);
}

/**
 * _strdup - It returns a copy of a string
 * @str: It is a string
 * Return: It returns a string
 */
char *_strdup(char *str)
{
	char *newstr;
	int size;

	if (str == 0)
	{
	return (NULL);
	}

	size = _strlen(str) + 1;

	newstr = (char *) malloc(size * sizeof(str));
	if (newstr == 0)
	{
	return (NULL);
	}
	else
	{
	_strcpy(newstr, str);
	return (newstr);
	free (newstr);
	}
}
