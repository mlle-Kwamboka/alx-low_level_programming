#include <stdio.h>

/**
 * main - prints the sizes of all various types in c
 *
 * Return: Always 0
 */
int main(void)
{

	printf("size of a char: %2ld byte(s)", sizeof(char));
	printf("size of an int: %2ld byte(s)", sizeof(int));
	printf("size of a long int: %2ld byte(s)", sizeof(long int));
	printf("size of a long long int: %2ld byte(s)", sizeof(long long int));
	printf("size of a float: %2ld byte(s)", sizeof(float));

	return (0);
}
