#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t length_read, length_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	length_read = read(file_descriptor, buffer, letters);
	close(file_descriptor);
	if (length_read == -1)
	{
		free(buffer);
		return (0);
	}

	length_written = write(STDOUT_FILENO, buffer, length_read);
	free(buffer);
	if (length_read != length_written)
	{
		return (0);
	}

	return (length_written);
}
