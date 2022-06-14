#include "main.h"

/**
 * islower - checking if characters is lowercase.
 *
 * Return: 1 (if lowercase), 0 (otherwise)
 */

int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((c = ch))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
