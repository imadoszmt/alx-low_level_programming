#include <stdio.h>

/**
 * main - Printing the first "98" fibonacci numbers, starting from 1 & 2.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	int n, excess;
	unsigned long f1_part1, f1_part2, f2_part1, f2_part2, f12_part1, f12_part2;
	

	for (n = 0; n <= 97; n++)
	{
		if (n <= 91)
		{
			f2 = f2 + f1;
			f1 = f2 - f1;
			printf("%lu, ", f2);
		}			
		else if (n >= 92)
		{
			f1_part1 = f1 / 1000000000;
			f1_part2 = f1 % 1000000000;
			f2_part1 = f2 / 1000000000;
			f2_part2 = f2 % 1000000000;
			excess = (f1_part2 + f2_part2) / 1000000000;
			f12_part2 = (f1_part2 + f2_part2) - (excess * 1000000000);
			f12_part1 = (f1_part1 + f2_part1) + excess;

			printf(", %lu%lu", f12_part1, f12_part2);
			
			f1_part1 = f2_part1;
			f1_part2 = f2_part2;
			f2_part1 = f12_part1;
			f2_part2 = f12_part2;

		}
	}
	printf("\n");
	return (0);
}
