#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - duplicates a string
 * @str: string arg
 *
 * Return: a pointer to the string duplicate or NULL.
 */
char *_strdup(char *str)
{
	char *cp;
	size_t i = 0, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	cp = (char *)malloc(sizeof(char) * len);

	if (cp == NULL)
		return (NULL);
	while (i < len)
	{
		cp[i] = str[i];
		i++;
	}
	return (cp);
}
