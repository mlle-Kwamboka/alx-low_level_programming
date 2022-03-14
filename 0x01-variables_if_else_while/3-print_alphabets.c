#include <stdio.h>

/**
 * main - print alphabet in lower case from a-z
 * followed by uppercase A-Z
 * Return: Always 0 if successful
 */
int main(void)
{
	char y = 'a';
	char x = 'A';

	while (y <= 'z')
	{
		putchar (y);
		y++;
	}
	while (x <= 'Z')
	{
		putchar (x);
		x++;
	}
	putchar('\n');
	return (0);
}
