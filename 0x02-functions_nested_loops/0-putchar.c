#include "main.h"

/**
 * main - a program that prints "_putchar".
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int ch;

	for (ch = 0; ch <= 7; ch++)
	{
		_putchar(str[ch]);
	}

	_putchar('\n');
	return (0);
}
