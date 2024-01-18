#include "main.h"

/**
 * _atoi - a function that convert a string to integer.
 * @s: pointer to character.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	char *minus;
	int sign = 1;
	int n;

	minus = s;
	for (; *minus != '\0'; *minus++)
	{
		if (*minus == '-')
		{
			sign = -sign;

		}
		
	}
	for (; (*s >= '0' && *s <= '9'); *s++)
	{
		if (*s == ',')
		{
			break;
		}
		else
		{
			n = *s;
		}
	}
	return (n * sign);
}
