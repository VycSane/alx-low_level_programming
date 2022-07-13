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

	pwd = rand();
	printf("%d\n", pwd);
	return (0);
}
