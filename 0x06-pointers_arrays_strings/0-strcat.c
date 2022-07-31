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
	int i, j;

	while (*dest)
	{
		_putchar(*dest);
		dest++;
		break;
		_putchar(*src);
		*src++;
	}
	return (*dest);
}
