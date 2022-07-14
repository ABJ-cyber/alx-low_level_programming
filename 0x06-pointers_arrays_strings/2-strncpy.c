#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: nymber
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *current = dest;

	if (dest == NULL)
		return (NULL);

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (current);
}
