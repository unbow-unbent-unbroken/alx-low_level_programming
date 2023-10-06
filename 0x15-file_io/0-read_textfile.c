#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);
	free(buffer);

	if (bytes_written != bytes_read)
	{
		return (0);
	}

	return (bytes_written);
}
