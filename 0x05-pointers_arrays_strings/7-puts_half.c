#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: a pointer to character.
 *
 */

void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 0)
	{
		for (i = _strlen(str) / 2 ; i < _strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else if (_strlen(str) % 2 != 0)
	{
		for (i = (_strlen(str) - 1) / 2; i < _strlen(str); i++)
		{
			_putchar(str[i]);
		}
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
