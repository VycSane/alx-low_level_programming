#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * of integers, followed by a new line.
 * @a: the array to print.
 * @n: the number of elements to print from the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
