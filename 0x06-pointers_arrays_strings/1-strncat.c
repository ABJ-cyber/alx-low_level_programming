#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: use most n bytes
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *current = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*current++ = *src++;
	}
	*current = '\0';
	return (dest);
}
