#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	char b;

	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n')
	return (0);
}
