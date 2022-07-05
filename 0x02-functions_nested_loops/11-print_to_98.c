#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: starting point
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
