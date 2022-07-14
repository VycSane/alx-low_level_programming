#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * upto n letters from the src string.
 * @dest: string destination
 * @src: string source
 * @n: length of string to slice from the source string.
 *
 * Return: a pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	size_t src_end, dest_end;

	src_end = strlen(src);
	dest_end = strlen(dest);

	if ((size_t) n > src_end)
		n = src_end;

	for (i = 0; i < n; i++)
	{
		dest[dest_end + i] = src[i];
	}
	dest[dest_end + src_end] = '\0';
	return (dest);
}
