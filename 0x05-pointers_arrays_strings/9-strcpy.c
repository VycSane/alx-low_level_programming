#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), 
 * to the buffer pointed to by dest.
 * @dest: the destination variable.
 * @src: the source string.
 *
 * Return: the pointer to dest variable.
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
