#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It reads the text file print to STDOUT
 * @filename: this is  the text file that is being read
 * @letters: this are the number of letters to be read
 * Return 0: w- actual number of bytes that were read and printed when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
