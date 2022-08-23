#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the specified filename
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int cs, fd, rs, ws;
	char *mem = malloc(letters * sizeof(char));

	if (mem == NULL)
		return (0);
	if (filename == NULL)
	{
		free(mem);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(mem);
		return (0);
	}
	rs = read(fd, mem, letters);
	mem[rs] = '\0';
	if (rs == -1)
	{
		free(mem);
		return (0);
	}
	ws = write(STDOUT_FILENO, mem, rs);
	if (ws == -1)
	{
		free(mem);
		return (0);
	}
	cs = close(fd);
	if (cs == -1)
	{
		free(mem);
		return (0);
	}
	free(mem);
	return (rs);
}
