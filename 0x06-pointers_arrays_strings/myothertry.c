#include "main.h"
/**
 * string_toupper - changes lowercase characters to upper
 * @char: The string to change
 *
 * Return: String changed
 */
char *string_toupper(char *s)
{
	int i = 97;
	int j = 65;

	while (i >= 97 && i <= 122)
		i++;
	if (s[i])
	{
		for (j = 65; j < 90; j++)
		{
			s[i] = s[j];
		}
	}
	s[i] = '\0';

	return (s);
}

