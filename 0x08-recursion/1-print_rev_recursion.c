#include "main.h"

/**
 * _print_rev_recursion - A function that print a string in reverse
 * using recursion.
 * @s: A pointer the string to be printed.
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	int lenght = _strlen(s);

	if (lenght > 0)
	{
		_putchar (*s + lenght);
		_print_rev_recursion(s);
		lenght--;
	}
	else
		_putchar ('\n');
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
