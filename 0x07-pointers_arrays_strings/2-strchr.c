#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: the string to search
 * @c: the character to look for
 *
 * Return: a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		if (s[i] == c)
			return (s + i);
		if (s[i] == '\0')
			break;
		i++;
	}
	return (NULL);
}
