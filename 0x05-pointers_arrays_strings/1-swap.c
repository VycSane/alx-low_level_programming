#include "main.h"

/**
 * swap_int - swaps the value of two integer variables apssed as params.
 * @a: first params passed by refernce.
 * @b: second params passed by reference.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
