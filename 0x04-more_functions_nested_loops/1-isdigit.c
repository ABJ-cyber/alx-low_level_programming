#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: parameter
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 & c <= 57)
		return (1);
	return (0);
}
