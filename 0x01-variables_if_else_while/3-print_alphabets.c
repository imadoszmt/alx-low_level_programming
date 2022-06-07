#include <stdio.h>

/**
 * main - printing lowercase followed by uppercase alphabets
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');

	return (0);
}
