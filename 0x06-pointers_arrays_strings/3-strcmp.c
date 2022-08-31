#include "main.h"

/**
 * _strcmp - a function that compares two strings "s1" and "s2".
 * @s1: a pointer to character.
 * @s2: a pointer to character.
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		result = 0;
		if (s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
		}
		else if (s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
