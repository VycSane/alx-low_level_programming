#include <string.h>
#include <ctype.h>

/**
 * leet - encodes a string into leet
 * @str: input string
 *
 * Return: a pointer to the string
 */
char *leet(char *str)
{
	int i, j;
	char tmp;
	char key[] = "aeolt";
	char value[] = "43017";

	for (i = 0; str[i] != '\0'; i++)
	{
		tmp = tolower(str[i]);
		for (j = 0; (size_t) j < strlen(key); j++)
		{
			if (tmp == key[j])
				str[i] = value[j];
		}
	}
	return (str);
}
