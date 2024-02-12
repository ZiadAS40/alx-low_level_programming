#include "main.h"

/**
 * read_textfile - read a context of a file.
 * @filename: the name of the file.
 * @letters: the number of letters.
 * Return: the number of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead;
	ssize_t bytesWrite;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
		return (0);

	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWrite == -1)
		return (0);

	close(fd);
	free(buffer);

	return (bytesWrite);
}
