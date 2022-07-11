#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int res;

	res = 0;
	for (int i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';
	return res;
}
