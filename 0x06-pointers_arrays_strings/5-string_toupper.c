#include "main.h"
/**
 * string_toupper - changes lowercase characters to upper
 * @char: The string to change
 *
 * Return: String changed
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

	}

	return (s);
}

