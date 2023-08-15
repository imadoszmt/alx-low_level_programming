#include "main.h"

/**
 * _strpbrk - A function that searches the first occurence of any
 * character from "accept" string within 's' string.
 * @s: A pointer to the null-terminating string we want to search.
 * @accept: A pointer to the null-terminating string containing the
 * set of character we want to search for.
 *
 * Return: if found return the first occurrence of any character from
 * "accept" string in 's' string.esle, return NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	char *accept_begin = accept;

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
		if (*accept == '\0')
		{
			accept = accept_begin;
		}
	}
return (NULL);
}
