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

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
