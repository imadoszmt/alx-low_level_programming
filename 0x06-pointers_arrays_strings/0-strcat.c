#include "main.h"

/**
 * _strcat - A function that concatenate two strings.
 * @dest: pointer to character.
 * @src: pointer to character.
 *
 * Return: pointer to character.
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = _strlen(dest);
	while (*dest)
	{
		while (src != '\0')
		{
			*(dest + i) = *src;
			src++;
			i++;
		}
	}
	return (*dest);
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
