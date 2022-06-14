#include "main.h"
/**
 * print_alphabet_x10: printing lowercases "10 times", followed by "new ligne".
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times;
	char ch;

	for (times = 1; times <= 10; times++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar (ch);
		}
		_putchar ('\n');

	}
}
