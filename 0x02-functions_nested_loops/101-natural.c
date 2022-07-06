#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of multiples of 3 under 1084
 *
 * Return: nothing
 */
int main(void)
{
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		sum += i;
		i += 3;
	}
	printf("%d\n", sum);
	return (0);
}
