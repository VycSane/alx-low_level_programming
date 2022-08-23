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
	int fd_to, fd_from, rs, ws;
	char *to, *from, buffer[1024];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	from = argv[1];
	to = argv[2];
	fd_to = open(to, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	rs = read(fd_from, buffer, 1024);
	if (rs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	ws = write(fd_to, buffer, rs);
	if (ws == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	close(fd_to);
	close(fd_from);
	return (0);
}
