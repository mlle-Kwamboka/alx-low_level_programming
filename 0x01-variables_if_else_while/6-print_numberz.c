#include <stdio.h>

/**
 * main - print single digit base 10 numbers from 0-9
 * Return: Always 0 if successful
 */
int main(void)
{
	char y = '0';

	while (y <= '9')
	{
		putchar (y);
		y++;
	}
	putchar('\n');
	return (0);
}
