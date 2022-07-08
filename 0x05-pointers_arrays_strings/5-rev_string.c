#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: a pointer to character.
 *
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	j = 0;
	for (i = _strlen(s) - 1; s[i] != '\0'; i--)
	{
		if (j < i)
		{	
			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
		}
	j++;	
	}
	
}

/**
 * _strlen - return the lenght of a string.
 * @s: pointer to a character.
 *
 * Return: lenght (integer).
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0';)
		count++;
	return (count);
}
