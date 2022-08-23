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
		exit(97);
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
	do {
		rs = read(fd_from, buffer, 1024);
		if (rs == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			exit(98);
		}
		ws = write(fd_to, buffer, rs);
		if (ws == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			exit(99);
		}
	} while (rs > 0);
	close_file(fd_to);
	close_file(fd_from);
	return (0);
}
/**
 * close_file - closes an open file
 * @fd: file descriptor of the open file
 */
void close_file(int fd)
{
	int cs = close(fd);

	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
