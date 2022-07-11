#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int res, i, neg;

	res = 0;
	neg = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + s[i] - '0';
		else if (s[i] == '-')
			neg += 1;
	}

	if (neg % 2 == 1)
		res *= -1;


	return res;
}
