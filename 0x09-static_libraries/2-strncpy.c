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
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
