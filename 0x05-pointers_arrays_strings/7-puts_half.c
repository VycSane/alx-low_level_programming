#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second-half of a string followed by a newline.
 * @str: the string to print.
 */
void puts_half(char *str)
{
	char c;
	int i;

	i = strlen(str) / 2;
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
