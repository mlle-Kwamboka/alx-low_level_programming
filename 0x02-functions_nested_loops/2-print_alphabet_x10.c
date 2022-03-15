#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet x10 followed by a new line
 */

void print_alphabet_x10(void)
{
	char y;

	int i;
	
	i = 0;

	while (i < 10)
	{
		
		y = 'a';
		
		while (y <= 'z')
		{
			putchar (y);
			y++;
		}
	}
	putchar ('\n');
	i++;

}
