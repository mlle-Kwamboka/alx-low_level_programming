#include <stdio.h>

/**
 * main - print single digit base 10 numbers from 0-9
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
