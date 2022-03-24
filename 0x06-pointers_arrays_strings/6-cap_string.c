#include "main.h"
/**
 * cap_string - capitalizes all words of astring
 * @s: string to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	char lst[13] = {' ', '\t', '\n', ',', ';', '.','!', '?', '"', '(', ')', '{','}'};
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && i >= 'a' && i <= 'z')
			s[i] -= 32;
	}
	for (j = 0; j <13; j++)
	{
		if (s[i] == lst[j])
		{
			if (s[i+1] >= 'a' && s[i+1] <= 'z')
			{
				s[i+1] -=32;
			}
		}
	}
	return (s);
}

