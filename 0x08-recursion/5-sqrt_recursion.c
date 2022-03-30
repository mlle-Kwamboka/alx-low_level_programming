#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: the number whose squareroot is sought
 *
 * Return: squareroot if it exists, - otherwise
 */
int _sqrt_recursion(int n)
{
	int i;
	
	i = 1;

	if (i == 1&& i <= (n / 2))
	{
		if ((n / i) == i)
			return (i);
	}
	return (-1);
}
