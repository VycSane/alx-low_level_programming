#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 if character is an alphabet or 1 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
