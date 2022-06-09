#include <stdio.h>

/**
 * main - prints any combination of 2 2-digit
 * numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <=9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i <= 9 && j <= 9)
					{
						putchar(i + '0');
						putchar (j + '0');
						if (i != 9 || j != 9)
						{
							putchar (' ');
							if (k <= j)
							{
								putchar(k + '0');
								putchar(l + '0');
								if (k != 9 || l != 9)
								{
									putchar(',');
									putchar(' ');
								}
							}

						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
