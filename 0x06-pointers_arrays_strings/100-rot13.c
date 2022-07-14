#include <string.h>

/**
 * rot13 - encodes a string using rot13.
 * @str: input string
 *
 * Return: a pointer to string
 */
char *rot13(char *str)
{
	int i, j;
	char tmp;

	char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char value[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		tmp = str[i];
		for (j = 0; (size_t) j < strlen(key); j++)
		{
			if (tmp == key[j])
				str[i] = value[j];
		}
	}
	return (str);
}
