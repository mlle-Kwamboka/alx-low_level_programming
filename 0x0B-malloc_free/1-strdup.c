#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns pointer to newly allocated space containing copy of
 * of a string
 * @str: The string to be dup
 *
 * Return: pointer to str, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
