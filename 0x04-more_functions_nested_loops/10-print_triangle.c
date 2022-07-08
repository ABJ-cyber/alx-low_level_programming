#include <stdio.h>
#include "main.h"

/**
 * print_triangle(int size)
 * @size: size of triangle
 * return: void
 */

void print_triangle(int size)
{
	int row;
	int spaces;
	int has;

	for (row = 1; row <= size; row++)
	{
		for (spaces = 1; spaces <= (size - row); spaces++)
			putchar(' ');
		for (has = 1; has <= row; has++)
			putchar('#');
		putchar('\n');
	}
}
