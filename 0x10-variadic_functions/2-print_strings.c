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
	int is_valid = 0;
	va_list args;

	if (n <= 0)
		exit(0);
	va_start(args, n);
	while (i < n)
	{
		if (is_valid)
			printf("%s", separator);
		is_valid = 0;
		str = va_arg(args, char *);
		if (str == NULL)
		{
			is_valid = 1;
			printf("nil");
		}
		else
		{
			is_valid = 1;
			printf("%s", str);
		}
		if (separator == NULL)
		{
			i++;
			continue;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
