#include <stdio.h>

/**
 * main - prints the sizes of all various types in c
 *
 * Return: Always 0
 */
int main(void)
{

	printf("size of a char: %2ld bytes\n", sizeof(char));
	printf("size of an int: %2ld bytes\n", sizeof(int));
	printf("size of a long int: %2ld bytes\n", sizeof(long int));
	printf("size of a long long int: %2ld bytes\n", sizeof(long long int));
	printf("size of a float: %2ld bytes\n",sizeof(float));

	return (0);
}
