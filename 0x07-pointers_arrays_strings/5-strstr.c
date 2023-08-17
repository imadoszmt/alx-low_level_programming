#include "main.h"
/**
 * _strstr - A function used to find the first occurrence of a
 * substring "needle" within the main string "haystack".
 * @haystack: the main string we want to search in.
 * @needle: the substring we want to search for.
 *
 * Return: a pointer to the first occurence os substring in the
 * main string, else return NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *keeper = haystack;

		haystack = _strpbrk(haystack, needle);
		while ((*haystack == *needle) && (*needle != '\0'))
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (keeper);
		}
		haystack++;
	}
	return (NULL);
}

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
