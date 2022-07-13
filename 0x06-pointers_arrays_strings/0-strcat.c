#include "main.h"
#include <string.>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	char *current; 
		
	*current = dest + strlen(dest);

	while (*src != '\0')
	{
		*current = *source;
		*current++;
		*source++;
	}
	*current = '\0';

	return (dest);
}


