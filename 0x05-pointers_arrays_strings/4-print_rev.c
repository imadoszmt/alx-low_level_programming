#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to character.
 *
 */

int _strlen(char *s);
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
