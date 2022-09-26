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
	char characters[] = {'a', 'e', 'o', 't', 'l'};
	int numbers[] = {'4', '3', '0', '7', '1'};
	int i, j;

	i = 0;
	while (a[i])
	{
		j = 0;
		while (characters[j])
		{
			if (a[i] == characters[j] || a[i] == characters[j] - 32)
			{
				a[i] = numbers[j];
			}
		j++;
		}
	i++;
	}
	return (a);
}
