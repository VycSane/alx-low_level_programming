#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: the string argument;
 */
void rev_string(char *s)
{
	int i;
	char tmp;
	int str_length = strlen(s);
	int rev_str_pos;

	for (i = 0; i < str_length / 2; i++)
	{
		tmp = s[i];
		rev_str_pos = str_length - 1 - i;
		s[i] = s[rev_str_pos];
		s[rev_str_pos] = tmp;
	}
}
