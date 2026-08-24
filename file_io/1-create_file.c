#include "main.h"

/**
 * count_length - counts the length of a NULL terminated string
 * @text_content: the string to measure
 *
 * Return: the length of the string
 */
int count_length(char *text_content)
{
	int len;

	len = 0;
	while (text_content[len] != '\0')
		len++;

	return (len);
}

/**
 * create_file - creates a file with given text content
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = count_length(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
