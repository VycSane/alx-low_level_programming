#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints numbers passed as args
 * @separator: a string that separates the numbers
 * @n: the  number of variable args
 * @...: the variable args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	if (n <= 0)
		exit(0);
	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator == NULL)
		{
			i++;
			continue;
		}
		printf("%s", separator);
		i++;
	}
	va_end(args);
}
