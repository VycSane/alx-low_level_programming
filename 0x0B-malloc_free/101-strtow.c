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

	if (!str || str[0] == '\0')
		return (NULL);
	cp = trim(str);
	len = strlen(cp);

	while (i < len)
	{
		if (i == len - 1)
			return (NULL);
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		else
		{
			break;
		}
	}
	i = 0;
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
	cpp[j] = (char *)malloc(sizeof(char));
	if (cpp[j] == NULL)
	{
		free(cp);
		cp = NULL;
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
	size_t start = 0, i = 0, j = 0, len = strlen(str);
	size_t nft = 0, sp = 0, ps = 0;
	char *cp = (char *)malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);
	while (i < len)
	{
		if (str[i] != ' ')
		{
			start = 1;
			nft = 1;
			if (sp)
			{
				ps = 1;
				sp = 0;
			}
		}
		else
		{
			start = 0;
			if (nft)
			{
				sp = 1;
				nft = 0;
			}
		}
		if (start)
		{
			if (ps)
			{
				cp[j] = ' ';
				j++;
				ps = 0;
			}
			cp[j] = str[i];
			j++;
		}
		i++;
	}
	cp[j] = '\0';
	return (cp);
}
