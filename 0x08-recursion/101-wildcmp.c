int cmp(int *i, int *j, int *ts, char *s1, char *s2);
/**
 * wildcmp - function that compares two strings
 * @s1: first arg
 * @s2: second arg
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0, ts = 0;

	return (cmp(&i, &j, &ts, s1, s2));
}

/**
 * cmp - compares the strings
 * @i: first arg
 * @j: second arg
 * @ts: third arg
 * @s1: fourth arg
 * @s2: fifth arg
 *
 * Return: an integer
 */
int cmp(int *i, int *j, int *ts, char *s1, char *s2)
{
	if (s2 == "*e")
		return (0);
	if (s1[*i] == '\0' && s2[*j] == '\0')
		return (1);
	if (s1[*i] == '\0' && s2[*j] != '*')
		return (0);
	if (s2[*j] == '*')
	{
		*j = *j + 1, *ts = 1;
		return (cmp(i, j, ts, s1, s2));
	}
	if (s1[*i] == s2[*j])
	{
		*i = *i + 1, *j = *j + 1;
		return (cmp(i, j, ts, s1, s2));
	}
	if (s1[*i] != s2[*j] && *ts == 1)
	{
		*i = *i + 1;
		return (cmp(i, j, ts, s1, s2));
	}
	return (0);
}
