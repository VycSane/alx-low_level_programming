#include <string.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: the input string
 *
 * Return: a pointer to the string.
 */
char *cap_string(char *str)
{
	int i;
	char tmp;
	char terminators[] = ",;.!?\"(){}\t\n ";
	char next_chr;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		tmp = str[i];
		next_chr = str[i + 1];
		if (strchr(terminators, tmp) != NULL && next_chr != '\0')
		{
			if (next_chr >= 97 && next_chr <= 122)
				str[i + 1] = next_chr - 32;
		}
	}
	return (str);
}
