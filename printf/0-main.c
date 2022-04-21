#include "main.h"
#include <stdarg.h>

/**
* _printf - Prints according to format
* @format: character string
*
* Return: Output
*/
int _printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);

	if (format)
		printf("%s", format);
	printf("\n");
	va_end(list);
}


#include "main.h"
#include <stdio.h>

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
	printf("The letter %c is the first letter in the alphabet\n", c);
	s = "ALX SE Course";
	_printf("The %s is one challenge I do not regret taking\n", s);
	printf("The %s is one challenge I do not regret taking\n", s);
	_printf("%%");
	printf("%%");
	return (0);
}
