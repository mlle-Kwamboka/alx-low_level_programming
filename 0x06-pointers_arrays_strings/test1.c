#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;

	while(dest[i] != '\0')
	{
		i++;
		for(i = 0; i != '\0'; i++)
		{
			_putchar(i);
		}
	}
	while(src[j] != '\0')
	{
		j++;
		for(j = 0; j <= '\0'; j++)
		{
			_putchar(j);
		}
	}
	n = i + j;

	while(dest[n] < '\0')
	{
		n++;
		for(n = 0; n <= '\0'; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
	return (0);
}
