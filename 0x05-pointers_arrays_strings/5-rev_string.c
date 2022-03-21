#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len -1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}	
