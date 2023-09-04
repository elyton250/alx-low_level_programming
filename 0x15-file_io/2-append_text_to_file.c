#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
/**
  *append_text_to_file - appends text to file
  *@filename: the file to be created
  *@text_content: the contents to be copied
  *
  *Return: 1 on sucess
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writen;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 066666666);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		writen = write(fd, text_content, strlen(text_content));
	if (writen == -1)
		return (-1);
	close(fd);
	return (1);
}

