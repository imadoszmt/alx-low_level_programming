#include "main.h"

/**
 * main - printing alphabet in lowercase with "_putchar()".
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar (ch);
	}

	_putchar('\n');
	return (0);
}
