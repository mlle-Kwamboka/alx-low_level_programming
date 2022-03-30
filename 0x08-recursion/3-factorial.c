#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: integer to get its factorial
 *
 * Return: factorial or -1 if n is less than 0
 */
int factorial(int n)
{
	int i, j;

	i = 1;
	j = 1;

	if (n <= 1)
		return (1);
	if (i <= n)
	{
		j = n * i;
		return (j);
	}
	i++;
	if (n < 0)
		return (-1);
	return (0);
}
