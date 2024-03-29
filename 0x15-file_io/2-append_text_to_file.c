#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends to a text file
 * @filename: the specified filename
 * @text_content: the content that would be written to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ws, cs;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		ws = write(fd, text_content, strlen(text_content));
	if (ws == -1)
		return (-1);
	cs = close(fd);
	if (cs == -1)
		return (-1);
	return (1);
}
