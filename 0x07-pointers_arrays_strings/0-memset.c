#include "main.h"

/**
 * _memset - fills the first n bytes of memory area
 * @s: memory area
 * @b: constant byte
 * @n: number
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;
	while(n--)
		*p++ = (unsigned char) b;
	return s
}
