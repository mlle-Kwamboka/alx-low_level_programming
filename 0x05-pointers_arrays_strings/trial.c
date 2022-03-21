#include "main.h"
#include <stdio.h>

/**
 * modif_my_char_var - set char values to 'o' and '1'
 *
 * @*cc - character to be set
 * @ccc - character to be set
 *
 * Return: nothing
 */

void modif_my_char_var(char *cc, char ccc)
{
	printf("value of 'cc': %p\n", cc);
	printf("Address of 'cc': %p\n", &cc);
	printf("Value of 'ccc': %c\n", ccc);
	printf("Address of 'ccc': %p\n", &ccc);
	*cc = 'o';
	ccc = '1';
}

/**
 * main - solve me
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of c before: %d('%c')\n", c, c);
	printf("Address of c: %p\n", &c);
	printf("Value of p: %p\n", p);
	printf("Address of p: %p\n", &p);
	modif_my_char_var(p, c);
	return (0);
}
