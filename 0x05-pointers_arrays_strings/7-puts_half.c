#include <string.h>
#include "main.h"

/**
 * puts_half - prints last half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int len, i;

	len = strlen(str);
	if (len % 2 == 0)
		i = len /2;
	else
		i = (len - 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
