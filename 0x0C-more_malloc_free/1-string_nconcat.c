#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: fitst string arg
 * @s2: second string arg
 * @n: amount of bytes to copy from s2
 *
 * Return: a pointer to the concatenated string or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cp;
	size_t len1, len2, len, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = (n >= len2) ? (len1 + len2 + 1) : (len1 + n + 1);
	cp = malloc(len * sizeof(char));
	if (cp == NULL)
		return (NULL);
	while (i < len)
	{
		if (i < len1)
			cp[i] = s1[i];
		if (i < (len - len1))
			cp[i + len1] = s2[i];
		i++;
	}
	cp[len - 1] = '\0';
	return (cp);
}
