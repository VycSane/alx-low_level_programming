#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: string destination
 * @src: string source
 *
 * Return: a pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	size_t i, src_end, dest_end;

	src_end = strlen(src);
	dest_end = strlen(dest);

	for (i = 0; i < src_end; i++)
	{
		dest[dest_end + i] = src[i];
	}
	dest[dest_end + src_end] = '\0';
	return (dest);
}
