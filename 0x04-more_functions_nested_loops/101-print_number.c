#include <stdio.h>

/**
 * void print_number - prints a number
 * @n: number to print
 * Return: null
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n == 0)
		putchar('0');

	if (n / 10)
		print_number(n / 10);

	putchar((n % 10) + '0');
}
