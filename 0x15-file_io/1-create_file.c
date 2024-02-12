#include "main.h"

/**
 * create_file - creating a file and give it the permissions rw-------.
 * @filename: the file name.
 * @text_content: the content of the file.
 * Return: 1 on Success
 * -1 if fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytesWrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content)
		bytesWrite = write(fd, text_content, strlen(text_content));

	if (bytesWrite == -1)
		return (-1);
	return (1);
}
