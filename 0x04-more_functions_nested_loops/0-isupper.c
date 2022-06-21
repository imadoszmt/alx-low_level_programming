#include "main.h"

/**
 * _isupper - A function that checks the uppercase characters.
 * @c: Parameter type integer.
 * Return: 1 (if "c" uppercase), otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
