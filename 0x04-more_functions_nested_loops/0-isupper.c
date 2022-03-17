#include "main.h"

/**
 * _isupper checks for upper case letter
 * Return 1 if is uppercase 0 otherwise
 */
int _isupper(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
