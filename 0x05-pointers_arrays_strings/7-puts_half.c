#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: String to be printed half
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, j, len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len/2; j >= 0; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
