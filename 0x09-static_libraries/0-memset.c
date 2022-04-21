#include "main.h"

/**
 * _memset fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes of memory pointed to by s
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
