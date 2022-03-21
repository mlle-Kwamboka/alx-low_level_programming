#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

