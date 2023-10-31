#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_written;
	ssize_t text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_written = write(fd, text_content, text_len);
		if (n_written == -1 || n_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
