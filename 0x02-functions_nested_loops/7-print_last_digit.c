#include "main.h"

/**
 * print_last_digit - prints lasst digit
 * @n: input
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last);
	return (last);
}
