#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int integerType;
	float floatType;
	char charType;
	long int longIntType;
	long long int longLongIntType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("size of a long long int: %ld byte(s)\n", sizeof(longLongIntType));
	printf("size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
