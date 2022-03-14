#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Checks the last digit of a random integer n
 * Return: Always 0 when process exits successfully
 */
int main(void)
{
	int n;
	int x = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %i is %i and is 0\n", n, x);
	else if (x < 6)
	{
		printf("Last digit of %i is %i and is ", n, x);
		printf("less than 6 and not 0\n");
	}
	return (0);
}
