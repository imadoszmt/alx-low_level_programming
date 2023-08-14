#include "main.h"
/**
 * _strspn: A function that gets the length of a prifix substring.
 *  @s: A pointer to string intended for search.
 *  @accept: A pointer to string containing the characters intended to match.
 *
 *  Return: number of first matched characters.
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	for (; *s != '\0'; s++)
	{
		char *accept_begin = accept;

		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				counter++;
			}
			if (_strchr (accept, s) == NULL)
				break;
		}
		if (*accept == '\0')
		{
			accept = accept_begin;
		}
	}
	return (counter);
}
