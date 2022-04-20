#include "main.h"

/**
* _printf - Prints according to format
* @format: character string
*
* Return: Output
*/
int _printf(const char *format, ...)
{
	int i = 0;
	char *str, *sp = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			sp = "%";
			i++;
		}
	}

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
