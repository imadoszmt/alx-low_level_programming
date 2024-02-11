#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an integer.
 * @b: a pointer to a string of binary digits.
 *
 * Return: 0 if string is other than binary digit and NULL, otherwise
 * "unsigned int".
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, i;

	sum = 0;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		sum = (sum << 1) + (b[i] - '0');
		i++;
	}
	return (sum);
}
