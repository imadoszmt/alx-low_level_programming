#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @a: a pointer to a character.
 *
 * Return: string.
 */

char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		if ((a[i] >= 'a' && a[i] <= 'z') && (a[i - 1] == ' ' || a[i - 1] == '\n' ||
		a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.' || a[i - 1] == '!' ||
		a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '(' || a[i - 1] == ')' ||
		a[i - 1] == '{' || a[i - 1] == '}' || a[i - 1] == '\t'))
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
