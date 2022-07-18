/**
 * _memcpy - copies memory area
 * @dest: the destination buffer
 * @src: the source buffer
 * @n:  the length to copy
 *
 * Return: a pointer to the dest buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
