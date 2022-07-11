#include "main.h"

/**
 * print_rev - prints in revers
 * @s: string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	for (i = _strlen(s); i >= 0; i++)
	{
		_putchar(s[i - 1]);
	}
}
