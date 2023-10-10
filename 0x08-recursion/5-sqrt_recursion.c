#include "main.h"
int checking_func(int num, int r);

/**
 * _sqrt_recursion - A function that return the natural square root
 * of a number recursively using "Newtoon- Raphson" method.
 * @n: The number intended for calculation.
 *
 * Return: return "-1" if "n" does not have a natural square root, 
 * otherwise return the square root of "n".
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
		return (checking_func(n, 2));
}

/**
 * checking_func - A function that check if the number has a 
 * natural square-root or not.
 * @num: the number meant for square-root calculation.
 * @r: the root of the number "num".
 *
 * Return: return "-1" if the root doesn't exist, other the root or 
 * result if the root exist.
 */

int checking_func(int num, int r)
{
	if ((r * r) > num)
	{
		return (-1);
	}
	else if ((r * r) == num)
	{
		return (r);
	}
	else
		return (checking_func(num, r + 1));
}
