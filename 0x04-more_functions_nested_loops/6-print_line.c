#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line
 * @n: number oftimes
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		putchar('_');
	putchar('\n');
}
