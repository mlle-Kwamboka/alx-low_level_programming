#include <stdio.h>

/**
 * main - print alphabet in lower case in reverse from z-a
 * Return: Always 0 if successful
 */
int main(void)
{
	char y = 'z';

	while (y <= 'z' && y >= 'a')
	{
		putchar(y);
		--y;
	}

	putchar('\n');
	return (0);
}
