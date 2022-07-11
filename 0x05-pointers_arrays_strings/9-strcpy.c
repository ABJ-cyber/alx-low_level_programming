#include "main.h"
#include <string.h>

/**
 * _strcpy - Copies a string
 * @dest: destination
 * @src: sournce
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
