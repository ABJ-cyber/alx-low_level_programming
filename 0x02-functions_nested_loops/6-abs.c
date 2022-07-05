#include "main.h"

/**
 * _abs - Computes absolute value
 * @n: value to find absolute
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
