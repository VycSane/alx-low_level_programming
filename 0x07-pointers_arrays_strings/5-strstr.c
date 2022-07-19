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
	int i = 0, j = 0, pos = 0;

	if (needle[j] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] != needle[j])
		{
			i++;
			continue;
		}
		pos = i;
		while (1)
		{
			if (needle[j] == '\0')
				return (haystack + pos);
			if (haystack[i] != needle[j])
				break;
			i++, j++;
		}
		j = 0;
	}
	return (NULL);
}
