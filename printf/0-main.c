#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	char *s;
	
	c = 'a';
	_printf("The letter %c is the first letter in the alphabet\n", c);
	s = "ALX SE Course";
	_printf("The %s is one challenge I do not regret taking\n", s);
	return (0);
}
