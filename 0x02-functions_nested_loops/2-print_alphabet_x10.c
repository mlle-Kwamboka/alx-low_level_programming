#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
int main(void)
{
	char *s = "abcdefghijklmnopqrstuvwxyz";

	while (*s != '\0')
	{
		_putchar (*s);
		s++;
	}
	_putchar ('\n');
	return (0);
}
