#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: specified formats
 * @...: list of variable args
 */
void print_all(const char * const format, ...)
{
	int n = (int) strlen(format), i = 0, var_int, is_valid = 0;
	char var_char, *var_str, f;
	float var_float;
	va_list args;

	va_start(args, format);
	while (i < n)
	{
		f = format[i];
		if (is_valid && (f == 'c' || f == 'f' || f == 's' || f == 'i'))
			printf(", ");
		switch (f)
		{
			case 'c':
				var_char = (char) va_arg(args, int);
				printf("%c", var_char);
				is_valid = 1;
				break;
			case 'i':
				var_int = va_arg(args, int);
				printf("%d", var_int);
				is_valid = 1;
				break;
			case 'f':
				var_float = (float) va_arg(args, double);
				printf("%f", var_float);
				is_valid = 1;
				break;
			case 's':
				var_str = va_arg(args, char *);
				if (var_str == NULL)
				{
					printf("(nil)");
					is_valid = 1;
					break;
				}
				printf("%s", var_str);
				is_valid = 1;
				break;
			default:
				is_valid = 0;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
