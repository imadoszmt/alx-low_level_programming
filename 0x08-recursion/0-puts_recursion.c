#include "main.h"

/**
 * _puts_recursion - A function that prints a string followed by a
 * new line using recursing.
 * @s: A pointer to the string to be printed.
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (s != '\0')
	{
		_putchar (s);
		s++;
		_print_rev_recursion(s);
	}
	_putchar ('\n');
}
