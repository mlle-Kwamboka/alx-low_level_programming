#include "main.h"

/**
 * _strcpy copies string pointed to by src
 * @dest: pointer
 * @src: string to be copied 
 * 
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
