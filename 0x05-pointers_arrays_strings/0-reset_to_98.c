#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main (void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	printf("n=%d\n", n);
	reset_to_98(p);
	printf("n=%d\n", n);
	return (0);
}

/**
 * reset_to_98 - update value of m to 98
 * @m: pointer to integer to be set to 98
 *
 * Return: Nothing
 */

void reset_to_98(int *m)
{
	*m = 98;
}

