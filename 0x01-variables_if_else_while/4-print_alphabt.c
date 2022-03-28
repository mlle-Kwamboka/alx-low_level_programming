#include <stdio.h>

/**
 * main - print alphabet in lower case from a to z excluding d and e
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	for (c == 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return(0);
}
