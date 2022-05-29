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

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	putchar ('\n');
	return (0);
}
