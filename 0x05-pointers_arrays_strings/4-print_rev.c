#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to character.
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
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
