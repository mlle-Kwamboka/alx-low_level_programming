#include <stdio.h>

/**
 * main - prints possible combinations of single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i < i + 1)
			putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
