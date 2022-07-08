#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int spaces;
	int row;

	if (n <= 0)
		putchar('\n');

	for (row = 1; row <= n; row++)
	{
		for (spaces = 1; spaces <= row - 1; spaces++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
}
