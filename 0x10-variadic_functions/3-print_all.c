#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
void print_separator(size_t i, size_t *j, size_t f_len, char f, char *sf);
/**
 * print_all - prints anything.
 * @format: formats specified
 * @...: variable args
 */
void print_all(const char * const format, ...)
{
	size_t i = 0, j = 0, f_len;
	char *var_str, *sf = "cfis";
	va_list args;

	switch (format == NULL)
	{
		case 1:
			printf("\n");
			exit(0);
	}
	f_len = strlen(format);
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
		print_separator(i, &j, f_len, format[i], sf);
		i++;
	}
	printf("\n");
	va_end(args);
}
/**
 * print_separator - prints separator
 * @i: first arg
 * @j: second arg
 * @f_len: specifier length
 * @f: format specifier
 * @sf: valid specifier list
 */
void print_separator(size_t i, size_t *j, size_t f_len, char f, char *sf)
{
	while (*j < 4)
	{
		if (f == sf[*j] && (i < f_len - 1))
			printf(", ");
		*j = *j + 1;
	}
	*j = 0;
}
