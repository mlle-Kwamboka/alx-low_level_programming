#include <stdio.h>

/**
 * main - print all numbers base 16
 *
 * Return: Always 0
 */
int main(void)
{
	char i;
	char y;

	i = '0';
	y = 'A';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (y >= 'A' && y <= 'F')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
