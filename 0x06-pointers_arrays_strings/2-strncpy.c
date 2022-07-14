#include <string.h>

/**
 * _strncpy - a function that copies strings
 * upto n letters from the src string,
 * to the destimation string.
 * @dest: string destination
 * @src: string source
 * @n: length of string to slice from the source string.
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	size_t src_end, dest_end;

	src_end = strlen(src);
	dest_end = strlen(dest);

	if ((size_t) n > src_end)
		n = src_end;

	for (i = 0; (size_t) i < dest_end; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
