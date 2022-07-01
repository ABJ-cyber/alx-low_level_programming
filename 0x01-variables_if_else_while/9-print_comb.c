#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = '1'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
		}
	}
}
