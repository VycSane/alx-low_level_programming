#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: array of commandline args
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
