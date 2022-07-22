#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: command line args
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", (a * b));
	return (0);
}
