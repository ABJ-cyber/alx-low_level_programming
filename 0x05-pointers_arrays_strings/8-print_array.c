#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - prints n elements in an array
 * @a: array
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	_putchar('\n');
}
