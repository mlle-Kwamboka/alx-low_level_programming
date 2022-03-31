#include "main.h"

/**
 * void _puts_recursion - prints a string followed by new line
 * @s: the string
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (i <= '\0')
	{
		_putchar (s[i]);
	}
	i++;
	_putchar ('\n');
}
