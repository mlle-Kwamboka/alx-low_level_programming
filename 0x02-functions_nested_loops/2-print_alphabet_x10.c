#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x10 followed by a new line
 */
int main(void)
{
	char *s = "abcdefghijklmnopqrstuvwxyz";

	int i;
	
	i = 0;

	while (i < 10)
	{
				
		while (*s != '\0')
		{
			_putchar (*s);
			s++;
		}
	}
	_putchar ('\n');
	i++;
	return (0);

}
