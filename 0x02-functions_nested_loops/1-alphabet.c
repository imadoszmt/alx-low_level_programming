#include "main.h"

/**
 * main - printing alphabet in lowercase with "_putchar()".
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar (ch);
	}

	_putchar('\n');

}
