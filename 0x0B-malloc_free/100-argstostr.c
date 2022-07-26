#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * argstostr - concatenates all the args to string.
 * @ac: number of commandline args
 * @av: array of commandline strings
 *
 * Return: a pointer to the new string or NULL.
 */
char *argstostr(int ac, char **av)
{
	char *cp;
	size_t i = 0, j = 0, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < (size_t) ac)
	{
		len += (strlen(av[i]) + 1);
		i++;
	}
	len++;
	cp = (char *)malloc(len * sizeof(char));
	if (cp == NULL)
		return (NULL);
	i = 0;
	while (i < (size_t) ac)
	{
		j = 0;
		while (j < strlen(av[i]))
		{
			cp[k] = av[i][j];
			j++, k++;
		}
		cp[k] = '\n';
		i++, k++;
	}
	cp[len - 1] = '\0';
	return (cp);
}
