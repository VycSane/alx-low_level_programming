#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: password
 */
int main(void)
{
	int password;

	srand(time(NULL));
	password = rand();
	printf("%d\n", password);
	return (password);
}
