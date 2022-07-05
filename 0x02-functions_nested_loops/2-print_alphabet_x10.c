#include "main.h"

/**
 * print_alphabet_x10(void) - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return 
}
