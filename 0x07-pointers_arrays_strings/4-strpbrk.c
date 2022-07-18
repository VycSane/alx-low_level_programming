#include <stddef.h>
/**
 * _strpbrk - finds the first occurence of a byte in string s in string accept.
 * @s: the first argument
 * @accept: the second argument
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (1)
	{
		if (s[i] == '\0')
			break;
		if (s[i] == accept[j])
			return (s + i);
		if (accept[j] == '\0')
			i++, j = 0;
		j++;
	}
	return (NULL);
}
