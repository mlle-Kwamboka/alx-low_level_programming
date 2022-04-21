#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @c: the character to be located
 * @s: the string
 *
 * Return:pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
