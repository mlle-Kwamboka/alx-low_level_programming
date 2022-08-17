#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * return: The integer
 */

void print_number(int n)
{
	scanf("%d", &n);
	_putchar(n + '0');
}
