/**
 * _strcmp - compares two strings.
 * @s1: first string arg
 * @s2: second string arg
 *
 * Return: 0 if strings are equal. 15 if s1 is greater.
 * -15 if s2 is greater.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] > s2[i])
			return (1);
		if (s2[i] > s1[i])
			return (-1);
	}
	return (0);
}
