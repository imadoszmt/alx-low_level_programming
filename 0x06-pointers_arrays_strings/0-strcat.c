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
	while (*dest) 
	{
		_putchar(*dest);
		dest++;
		break;
		if (src != '\0')
		{
			_putchar(*src);
			src++;
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
