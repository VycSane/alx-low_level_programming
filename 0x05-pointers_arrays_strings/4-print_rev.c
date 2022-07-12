#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 * @s: the string argument;
 */
void print_rev(char *s)
{
	int i;
	int str_length = strlen(s);

	for (i = str_length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
