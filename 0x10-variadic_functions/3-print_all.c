#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
/**
 * print_all - prints anything.
 * @format: formats specified
 * @...: variable args
 */
void print_all(const char * const format, ...)
{
	size_t i = 0, j = 0;
	char *var_str, *sf = "cfis";
	va_list args;

	va_start(args, format);
	while (format && i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				var_str = va_arg(args, char *);
				if (var_str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", var_str);
		}
		while (i < j)
		{
			if (format[i] == sf[j] && (i < strlen(format) - 1))
				printf(", ");
			j++;
		}
		j = 0, i++;
	}
	printf("\n");
	va_end(args);
}
