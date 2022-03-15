#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet x10 followed by a new line
 */

void print_alphabet_x10(void)
{
	char y;

	char n;
	
	y = 'a';

	while (y <= 'z')
	{
		
		n = '1';
		
		while (n <= 10)
		{
			putchar (y);
			y++;
		}
	}
	n++;
	
	putchar ('\n');

}
