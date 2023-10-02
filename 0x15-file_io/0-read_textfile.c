#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- display the contents of a text file on stdout
 * @filename: read a text file
 * @letters: num of letters to be read
 * Return: w- actual number of bytes read and displayed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t t = 0, w;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *)malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, t);
	t = read(fd, buf, letters);

	free(buf);
	close(fd);
	return (w);
}
