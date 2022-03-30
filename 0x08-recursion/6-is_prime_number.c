#include "main.h"

/**
 * is_prime_number - return 1 if number is prime and 0 otherwise
 * @n: number being tested
 * return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (i <= 1)
		return (0);
	if (i == 2 && i < (n / 2))
	{
		if ((n % i) != 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
