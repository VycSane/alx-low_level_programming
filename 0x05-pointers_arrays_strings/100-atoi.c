#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string argument
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0, start = 0, end = 0;

	if (*s == '\0')
		return (0);
	if (s[0] == '-' && (s[1] >= '0' && s[1] <= '9'))
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
	{
		if ((s[i] == '-' || s[i] == '+') && (s[i - 1] == '-' || s[i - 1] == '+'))
			sign = -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			start = 1;
		}
		else
		{
			if (start == 1)
				end = 1;
		}
		if (start == 1 && end == 1)
			break;
	}
	return (sign * res);
}
