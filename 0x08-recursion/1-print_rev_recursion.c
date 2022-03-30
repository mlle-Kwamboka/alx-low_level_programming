#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: the string
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;

	if (i > 0 && s[i] == '\0')
	{
		s[0] = '\0';
		_putchar (*s);
	}
}
