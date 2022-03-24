#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to concat to
 * @src: string to concat
 *
 * Return: pointer to dest
 */
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
	_putchar('\0');
	_putchar('\n');
	return (dest);
}
