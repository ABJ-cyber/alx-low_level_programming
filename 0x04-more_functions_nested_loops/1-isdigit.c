#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: parameter
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 30 & c <= 39)
		return (1);
	return (0);
}
