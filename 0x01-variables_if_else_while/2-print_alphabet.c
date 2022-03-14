#include <stdio.h>

/**
 * main - print alphabet in lower case from a-z
 * Return: Always 0 if successful
 */
int main(void)
{
	char y = 'a';
	while (y <='z')
	{
		putchar (y);
		y++;
	}
	putchar('\n');
	return (0);
}
