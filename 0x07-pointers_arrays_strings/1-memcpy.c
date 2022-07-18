#include "main.h"

/**
 * _memcpy - copies n bytes from memory
 * @dest: destination
 * @src: source
 * @n: number
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	n++;
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (dest);
}
