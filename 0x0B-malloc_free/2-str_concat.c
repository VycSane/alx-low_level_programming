#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat - concatenates a string
 * @s1: first string arg
 * @s2: second string arg
 *
 * Return: a pointer to the new concatenated string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *cp;
	size_t i = 0, j = 0, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2) + 1;
	cp = (char *)malloc(sizeof(char) * (len1 + len2));

	if (cp == NULL)
		return (NULL);
	while (i < len1 || j < len2)
	{
		if (s1[i] != '\0')
		{
			cp[i] = s1[i];
			i++;
		}
		if (s2[i] != '\0')
		{
			cp[len1 + j] = s2[j];
			j++;
		}
	}
	return (cp);
}
