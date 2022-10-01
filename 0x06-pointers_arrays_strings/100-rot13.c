/**
 * rot13 - A function that encodes a string into "rot13"
 * (rotating letter by 13 places)
 * a@: a pointer to a string.
 * Return: a pointer to a string.
 */

char *rot13(char *a)
{
	char characters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	char substitute[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char upper_characters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char upper_substitute[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int i, j;

	i = 0;
	while (a[i])
	{
		j = 0;
		while (characters[j] || substitute[j] || upper_characters[j] || upper_substitute[j])
		{
			if (a[i] == characters[j])
			{
				a[i] = substitute[j];
			}
			else if (a[i] == substitute[j])
			{
				a[i] = characters[j];
			}
			else if (a[i] == upper_characters[j])
			{
				a[i] = upper_substitute[j];
			}
			else if (a[i] == upper_substitute[j])
			{
				a[i] = upper_characters[j];
			}
		j++;
		}
	i++;
	}
	return (a);
}
