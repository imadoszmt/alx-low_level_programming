#include <stdio.h>
/**
 * main - print lowercase alphabet except 'q' and 'e'.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e';'q')
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
