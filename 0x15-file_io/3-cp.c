#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, n_read, n_written, close_from, close_to;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (EXIT_FAILURE);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		n_written = write(fd_to, buf, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			close_from = close(fd_from);
			close_to = close(fd_to);
			if (close_from == -1 || close_to == -1)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from == -1 ? fd_from : fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}

	if (n_read == -1)
	{
		close_from = close(fd_from);
		close_to = close(fd_to);
		if (close_from == -1 || close_to == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from == -1 ? fd_from : fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_from == -1 || close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from == -1 ? fd_from : fd_to);
		return (100);
	}

	return (EXIT_SUCCESS);
}
