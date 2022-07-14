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
	if (destination == NULL)
		return (NULL);

	char *current = dest;

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (current);
}
