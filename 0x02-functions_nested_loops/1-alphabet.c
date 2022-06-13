#include "main.h"

/**
 * main - printing alphabet in lowercase with "_putchar()".
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar (ch);
	}

	_putchar('\n');
	return
}

int main(void)
{
	print_alphabet();
	return (0);
}
