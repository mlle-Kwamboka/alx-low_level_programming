#include <stdio.h>

/**
 * _islower - checks if character is lower case
 * Return: 1 lowercse, 0 otherwise
 */

int _islower(int c)
{
	int b;

	b = _islower ('A');
	putchar (b + '0');
	b = _islower ('n');
	putchar (b + '1');
	b  = _islower (20);
	putchar (b + '0');
	putchar ('\n');
	
	return (0);
}
