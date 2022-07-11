#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string input
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		if (i % 2 != 1)
			_putchar(str[i]);
		i++;
	}
}
