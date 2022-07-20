#include <stddef.h>
int is_sqrt(int *a, int *b, int n);
/**
 * _sqrt_recursion - returns the natural root of a number.
 * @n: the number.
 *
 * Return: an integer.
 */
int _sqrt_recursion(int n)
{
	int a = 0, b = n;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (is_sqrt(&a, &b, n));
}

/**
 * is_sqrt - returns the natural root of a number.
 * @a: the lower number
 * @b: the higher number
 * @n: the input number
 *
 * Return: an integer
 */
int is_sqrt(int *a, int *b, int n)
{
	size_t m = (*a + *b) / 2;

	if ((size_t) *a >= m)
		return (-1);
	if (m * m == (size_t) n)
		return (m);
	if (m * m > (size_t) n)
	{
		*b = (int) m;
		return (is_sqrt(a, b, n));
	}
	if (m * m < (size_t) n)
	{
		*a = (int) m;
		return (is_sqrt(a, b, n));
	}
	return ((int) m);
}
