#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	a = '0';
	do {
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	} while (a <= '9');
	putchar(' ');
	return (0);
}
