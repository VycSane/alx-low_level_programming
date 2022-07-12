#include "main.h"

/**
 * _puts - prints a string followed by a newline.
 * @str: the string to print.
 */
void _puts(char *str)
{
	char c;
	int i;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break;
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
