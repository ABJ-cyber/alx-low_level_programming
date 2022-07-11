#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int res, i;

	res = 0;
	for (i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return res;
}
