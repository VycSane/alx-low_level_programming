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
	int pwd;

	while (1)
	{
		pwd = rand();
		printf("%d", pwd);
	}
	return (0);
}
