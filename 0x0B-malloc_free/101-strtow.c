#include <stdlib.h>
#include <string.h>
#include <stddef.h>
char *trim(char *str);

/**
 * strtow - splits a string into words
 * @str: the string arg
 *
 * Return: a pointer to a 2D char array or NULL
 */
char **strtow(char *str)
{
	char *cp;
	char **cpp;
	size_t i = 0, j = 0, k = 0, l = 0, count = 1, width = 0, len;

	if (str == NULL || str == "")
		return (NULL);
	cp = trim(str);
	len = strlen(cp);

	while (i < len)
	{
		if (cp[i] == ' ')
			count += 1;
		i++;
	}
	cpp = (char **)malloc(sizeof(char *) * (count + 1));
	if (cpp == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (cp[i] == ' ' || (i == len && cp[i] != ' '))
		{
			cpp[j] = (char *)malloc(sizeof(char) * (width + 1));
			if (cpp[j] == NULL)
			{
				free(cp);
				cp = NULL;
				return (NULL);
			}
			k = 0;
			while (k < width)
			{
				cpp[j][k] = cp[l];
				l++, k++;
			}
			if (k == width)
			{
				cpp[j][k] = '\0';
				l++;
			}
			j++;
			width = 0;
		}
		if (cp[i] != ' ')
			width++;
		i++;
	}
	cpp[j] = NULL;
	free(cp);
	cp = NULL;
	return (cpp);
}
/**
 * trim - shrinks all spaces
 * @str: string input
 *
 * Return: a pointer to the shrinked string
 */
char *trim(char *str)
{
	size_t start = 0, stop = 0, i = 0, j = 0, len = strlen(str);
	char *cp = (char *)malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);
	while (i < len)
	{
		if (str[i] != ' ')
			start = 1;
		else
			start = 0;
		if (start)
		{
			cp[j] = str[i];
			j++;
			if (str[i + 1] == ' ')
			{
				cp[j] = ' ';
				j++;
			}
		}
		i++;
	}
	cp[j] = '\0';
	return (cp);
}
