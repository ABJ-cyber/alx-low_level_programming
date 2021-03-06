#include "main.h"

/**
 * _memset - fills the first n bytes of memory area
 * @s: memory area
 * @b: constant byte
 * @n: number
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = (unsigned char) b;
	return (s);
}
