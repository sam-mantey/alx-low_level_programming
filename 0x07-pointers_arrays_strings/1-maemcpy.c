#include "main.h"

/*
 * _memcpy -This copies memory area
 * @n: Numbeer of bytes
 * @src: the memory area to copy from
 * @dest: The memory area to be copied to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
