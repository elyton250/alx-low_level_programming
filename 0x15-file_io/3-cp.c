#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stddef.h>
/**
 * main - copy the content of a file
 * @argc: number of passed argments
 * @argv: pointer
 * Return: the total count of letters successfully read and output
 */

int main(int argc, char **argv)
{
	int file_1, file_2;
	int n;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	file_1 = open(argv[1], O_RDONLY);
	if (file_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant read from file %s\n", argv[1]);
		exit(98);
	}
	file_2 = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);
	while ((n = read(file_1, buffer, 1024)) > 0)
	{
		if (write(file_2, buffer, n) != n || file_2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_1);
		exit(100);
	}
	if (close(file_2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_2);
		exit(100);
	}
	return (0);
}
