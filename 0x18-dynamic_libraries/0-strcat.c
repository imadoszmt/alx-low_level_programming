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
	__strcpy(&dest[one_strlen(dest)], src);
	dest[one_strlen(dest) + 1] = '\0';
	return (dest);
}
/**
 * one_strlen - return the lenght of a string.
 * @s: pointer to a character.
 *
 * Return: lenght (integer).
 */

int one_strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0';)
		count++;
	return (count);
}
/**
 * __strcpy - a function that copies string from "src" to "dest".
 * @dest: pointer to characters
 * @src: pointer to chracters.
 *
 * Return: character.
 */

char *__strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < one_strlen(src) + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
