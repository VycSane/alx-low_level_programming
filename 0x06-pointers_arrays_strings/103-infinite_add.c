#include <string.h>

/**
 * infinite_add - adds two string numbers
 * @n1: first string number
 * @n2: second string number.
 * @r: buffer to store the result.
 * @size_r: size of the buffer.
 *
 * Return: a pointer to te buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int d1, d2, sum, n, k;

	int i = (int) strlen(n1) - 1;
	int j = (int) strlen(n2) - 1;
	int carry = 0;

	if (i >= j)
		k = i + 1;
	else
		k = j + 1;

	if (size_r <= k + 1)
		return (0);

	n = k + 1;
	while (n < size_r)
	{
		r[n] = '\0';
		n++;
	}

	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			d1 = n1[i] - '0';
		else
			d1 = 0;
		if (j >= 0)
			d2 = n2[i] - '0';
		else
			d2 = 0;
		sum = d1 + d2 + carry;
		r[k] = (sum % 10) + 48;
		carry = sum / 10;
		--i, --j, --k;
	}
	if (carry == 1)
		r[k] = '1';
	return (r);
}
