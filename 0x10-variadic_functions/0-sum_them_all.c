#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * sum_them_all - sums up the value of variable number of args.
 * @n: number of args to be passed
 * @...: variable no of args expected
 *
 * Return: sum of all the args or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0, value;
	va_list args;

	if (n <= 0 || n == NULL)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		value = va_arg(args, int);
		sum += value;
		i++;
	}
	va_end(args);
	return (sum);
}
