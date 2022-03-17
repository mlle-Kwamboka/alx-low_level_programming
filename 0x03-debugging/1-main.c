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

	while (i < 10) /**
			 * Output will be an infinite loop of zero because i is not incremented
			 */
	{
		putchar(i);
	
	}
	
	printf("infinite loop avoided! \\o/\n");

	return (0);
}

