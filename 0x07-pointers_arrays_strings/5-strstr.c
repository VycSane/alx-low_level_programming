#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: first argument
 * @needle: second argument
 *
 * Return: a pointer the beginning of the located substring,
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, pos;

	while (1)
	{
		if (needle[0] == '\0')
			return (haystack);
		if (haystack[i] == '\0')
			break;
		if (haystack[i] == needle[0])
		{
			pos = i;
			while (1)
			{
				if (needle[j] == '\0')
					return (haystack + pos);
				if (haystack[i] != needle[j])
					return (NULL);
				i++;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
