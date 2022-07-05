#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * Takes a character as argument
 * Return: 0 if argument is lowercase
 * Return: 1 if argument is not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
