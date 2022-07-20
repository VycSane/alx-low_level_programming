#include <string.h>

int cmp(char *s, size_t *n, size_t *l);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	size_t i = 0, sl = strlen(s);

	if (sl == 0)
		return (1);
	return (cmp(s, &i, &sl));
}

/**
 * cmp - compares characters at same position from both ends.
 * @s: input string
 * @n: character position
 * @l: the string length
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int cmp(char *s, size_t *n, size_t *l)
{
	if (*n == *l / 2)
		return (1);
	if (s[*n] == s[*l - *n - 1])
	{
		*n = *n + 1;
		return (cmp(s, n, l));
	}
	else
	{
		return (0);
	}
}
