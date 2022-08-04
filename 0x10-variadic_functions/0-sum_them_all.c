#include <stdarg.h>
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
	int sum = 0;
	va_list args;

	if (n <= 0)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
