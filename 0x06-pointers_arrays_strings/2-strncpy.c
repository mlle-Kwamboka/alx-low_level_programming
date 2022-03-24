#include "main.h"
/**
 * _strncpy - copies a string to another
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of bytes to use
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while(dest[i] != '\0')
		i++;

	for(j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	dest[i] = '\0';
	return (dest);
}
