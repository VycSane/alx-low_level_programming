int checker(int *d, int n);
/**
 * is_prime_number - checks if a number is a prime number.
 * @n: the number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);
	return (checker(&divisor, n));
}

/**
 * checker - checks if a number is a prime number.
 * @d: the divisor
 * @n: the number
 *
 * Return: an integer
 */
int checker(int *d, int n)
{
	if (*d >= n)
		return (1);
	if (n % *d == 0)
		return (0);
	*d = *d + 1;
	return (checker(d, n));
}
