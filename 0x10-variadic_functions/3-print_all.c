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
	size_t i = 0, f_len = strlen(format);
	char *var_str;
	va_list args;

	va_start(args, format);
	while (i < f_len)
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
		i++;
	}
	printf("\n");
	va_end(args);
}
