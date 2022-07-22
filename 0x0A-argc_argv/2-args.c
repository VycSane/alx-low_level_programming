#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: command line args
 *
 * Return: 0 on Success
 */
int main(int argc, char* argv[])
{
	int i = 1;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
