/**
 * rev_array - reverses an array of integers.
 * @a: the array
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int rev_num_pos;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		rev_num_pos = n - 1 - i;
		a[i] = a[rev_num_pos];
		a[rev_num_pos] = tmp;
	}
}
