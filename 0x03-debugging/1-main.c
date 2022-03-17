#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i); /**
			     * Output an infinite loop of 0 because there is no increment.
			     */
	
	}
	
	printf("infinite loop avoided! \\o/\n");

	return (0);
}

