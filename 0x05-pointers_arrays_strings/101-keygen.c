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
	srand(time(NULL));
	int password = rand();
	printf("%d\n", password);
	return (password);
}
