#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int fib[52];

	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (i < 50)
			printf("%d, ", fib[i]);
		else
			printf("%d\n", fib[i]);
	}
	return (0);
}
