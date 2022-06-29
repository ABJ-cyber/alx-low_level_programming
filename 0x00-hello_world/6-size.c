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
	double doubleType;
	char charType;
	long int longIntType;
	long long int longLongIntType;

	printf("Size of a char: %ld\n byte(s)", sizeof(charType));
	printf("Size of an int: %ld\n byte(s)", sizeof(integerType));
	printf("size of a long int: %ld\n byte(s)", sizeof(longIntType));
	printf("size of a long long int: %ld\n byte(s)", sizeof(longLongIntType));
	printf("size of a float: %ld\n byte(s)", sizeof(floatType));

	return (0);
}
