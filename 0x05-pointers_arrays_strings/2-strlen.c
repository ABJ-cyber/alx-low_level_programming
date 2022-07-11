#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	while (*s[i] != "/0")
	{
		i++;
	}
	return (i);
}
