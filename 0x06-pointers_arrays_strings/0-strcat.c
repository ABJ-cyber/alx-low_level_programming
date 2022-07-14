#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	char *current = dest + strlen(dest);

	while (*src != '\0')
	{
		*current++ = *src++;
	}
	*current = '\0';

	return (dest);
}


