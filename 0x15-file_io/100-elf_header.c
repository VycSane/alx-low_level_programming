#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: array of commandline args
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}
	return (0);
}
