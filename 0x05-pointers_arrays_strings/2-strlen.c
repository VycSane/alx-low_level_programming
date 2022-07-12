#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a string parameter.
 *
 * Return: the length of string passed as parameter.
 */
int _strlen(char *s)
{
	int i;
	char c;

	i = 0;
	while (1)
	{
		c = s[i];
		if (c == '\0')
			break;
		i++;
	}
	return (i);
}
