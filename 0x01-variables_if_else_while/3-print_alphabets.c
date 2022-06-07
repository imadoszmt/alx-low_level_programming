#include <stdio.h>

/**
 * main - printing lowercase followed by uppercase alphabets
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}

	putchar('\n');

	return (0);
}
