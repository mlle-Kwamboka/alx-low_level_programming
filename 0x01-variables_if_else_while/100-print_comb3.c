#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * separated by a comma
 * followed by a space
 *
 * Return: Nothing
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j && j != i && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
			if (i == 8 && j == 9)
				return
		}
	}
	return (0);
}
