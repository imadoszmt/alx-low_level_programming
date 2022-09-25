/**
 * leet - A function that ecodes a string into 1337 where.
 * 'a' & 'A' replaced by '4'.
 * 'e' & 'E' replaced by '3'.
 * 'o' & 'O' replaced by '0'.
 * 't' & 'T' replaced by '7'.
 * 'l' & 'L' replaced by '1'.
 * @a: A pointer to a character.
 * Return: A pointer to a character.
 */

char *leet(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		if (a[i] == 'a' || a[i] == 'A')
		{
			a[i] = '4';
		}
		else if (a[i] == 'e' || a[i] == 'E')
		{
			a[i] = '3';
		}
		else if (a[i] == 'o' || a[i] == 'O')
		{
			a[i] = '0';
		}
		else if (a[i] == 't' || a[i] == 'T')
		{
			a[i] = '7';
		}
		else if (a[i] == 'l' || a[i] == 'L')
		{
			a[i] = '1';
		}
		i++;
	}
	return (a);
}
