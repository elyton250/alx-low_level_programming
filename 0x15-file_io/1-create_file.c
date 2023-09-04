#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>
/**
  *create_file - creates file and write scontents in it
  *@filename: the file to be created
  *@text_content: content to be written
  *
  *Return: 1 for success
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writen;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		writen = write(fd, text_content, strlen(text_content));
	if (writen == -1)
		return (-1);
	close(fd);
	return (1);
}
