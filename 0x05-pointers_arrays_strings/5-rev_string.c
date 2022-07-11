#include <string.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int temp, i, left, len, right;

	left = 0;
	len = strlen(s);
	right = len - 1;

	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}
