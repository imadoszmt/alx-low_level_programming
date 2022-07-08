#include "main.h"

/**
 * puts2 - a function that print every other character of a string.
 * @str: a pointer to character.
 *
 */

void puts2(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
