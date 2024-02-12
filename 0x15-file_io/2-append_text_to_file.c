#include "main.h"

/**
 * append_text_to_file - append txet at the end of a file.
 * @filename: the file name :)
 * @text_content: the text content :)
 * Return: 1 if Success
 * -1 if fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		write(fd, text_content, strlen(text_content));
	}
	return (1);
}
