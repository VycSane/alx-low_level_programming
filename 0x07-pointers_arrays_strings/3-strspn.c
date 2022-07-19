/**
 * _strspn - gets the length of a prefix substring.
 * @s: first arg
 * @accept: second arg
 *
 * Return: an unsigned integer value.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0, i = 0, j = 0;

	if (s[i] == '\0' && accept[j] == '\0')
		return (0);

	while (s[i] != '\0')
	{
		while (1)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			if (accept[j] == '\0')
				return (counter);
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}
