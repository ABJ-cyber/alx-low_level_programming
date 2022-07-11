#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int i, neg, start, res;
	int temp;

	res = 0;
	neg = 0;
	start = 5;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (start == 0)
			break;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (start == 5)
			{
				start = 1;
			}
			temp = s[i] - '0';
			if (res * 10 + temp > 2147483647)
				return (-2147483648);
			res = res * 10 + temp;
		}
		else if (s[i] == '-')
			neg += 1;
		else if (start == 1)
			start = 0;
	}

	if (neg % 2 == 1)
		res *= -1;


	return (res);
}
