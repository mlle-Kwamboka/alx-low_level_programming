#include "main.h"
#include "_putchar.c"

/**
 * _islower - checks if character is lower case
 * Return: 1 lowercase, 0 otherwise
 */

int _islower(int i)
{
	int b;

	b = _islower('A');
	_putchar(b + '0');
	b = _islower('n');
	_putchar(b + '1');
	b = _islower(20);
	_putchar(b + '0');
	_putchar('\n');
	return (0);
}
