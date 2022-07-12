#include "main.h"

/**
 * puts2 - prints a string skipping the next character  followed by a newline.
 * @str: the string to print.
 */
void puts2(char *str)
{
	char c;
	int i;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break;
		i++;
		if (i % 2 == 0)
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
