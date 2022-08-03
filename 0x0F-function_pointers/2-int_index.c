/**
 * int_index - searches for an integer.
 * @array: the array arg
 * @size: the array size
 * @cmp: function pointer
 *
 * Return: index of the first occurrence
 * of the number or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		exit(0);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
