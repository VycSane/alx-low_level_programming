#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: command line args
 *
 * Return: 0 on Success
 */
int main(int argc,__attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
