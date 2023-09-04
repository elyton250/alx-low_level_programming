#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
/**
  *read_textfile - reads and prints things
  *@filename: the file to be read and written
  *@letters: the number of letters to be read and written
  *
  *Return; returns thr number of letters read and written
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_writen;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return(0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);
	bytes_writen = write(STDOUT_FILENO, buffer, letters);
	if (bytes_writen == -1 || bytes_writen < bytes_read)
		return (0);
	free(buffer);
	close(fd);
	return (letters);
}
