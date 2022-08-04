#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers passed as args
 * @separator: a string that separates the numbers
 * @n: the  number of variable args
 * @...: the variable args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (n <= 0)
		exit(0);
	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i == (n - 1))
		{
			printf("\n");
			break;
		}
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
