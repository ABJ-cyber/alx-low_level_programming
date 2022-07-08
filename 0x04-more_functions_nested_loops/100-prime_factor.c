#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: int
 */

int main(void)
{
	int i;
	long int max;
	long int n = 612852475143;

	max = -1;

	for (i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			max = n / i;
	}
	printf("%ld\n", max);

	return (0);
}
