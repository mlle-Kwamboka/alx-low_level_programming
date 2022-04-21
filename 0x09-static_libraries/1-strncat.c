#include "main.h"

/**
 * _strncat - concats two strings using at most n bytes from src
 * @dest: string to be concatenated to
 * @src: string to concat
 * @n: number of bytes of src to use
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while(dest[i] != '\0')
		i++;
	while(src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return(dest);
}
