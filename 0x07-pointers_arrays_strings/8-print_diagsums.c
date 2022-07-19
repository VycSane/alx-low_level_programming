#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: the matrix
 * @size: the size
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0, i = 0;

	while (i < size)
	{
		diag1 += *(a + (i * (size + 1)));
		diag2 += *(a + ((size - 1) * i + (size - 1)));
		i++;
	}
	printf("%d, %d\n", diag1, diag2);
}
