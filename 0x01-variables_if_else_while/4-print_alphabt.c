#include <stdio.h>

/**
 * main - print alphabet in lower case from a-z
 * except letter q and e
 * Return: Always 0 if successful
 */
int main(void)
{
	char y = 'a';
	char x = 'f';
	char p = 'r';

	while (y < 'e')
	{
		putchar (y);
		y++;
	}
	while (x < 'q')
	{
		putchar (x);
		x++;
	}
	while (p <= 'z')
	{
		putchar (p);
		p++;
	}
	putchar('\n');
	return (0);
}
