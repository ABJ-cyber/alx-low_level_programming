#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: int
 */

int main(void)
{
	int i;
	int max;
	long int n = 612852475143;

	max = -1;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	
	printf("%d\n", max);
}

