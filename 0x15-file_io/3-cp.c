#include "main.h"

/**
 * main - main function.
 * @ac: int.
 * @av: array of pointers.
 * Return: 0 always.
 */

int main(int ac, char **av)
{
	int as;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	as = copy_files(av[1], av[2]);
	if (as == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (as == -2)
	{
		dprintf(2, "Error: Can't write to %s\n", av[1]);
		exit(99);
	}
	else if (as != 1 && as != -1 && as != -2)
	{
		dprintf(2, "Error: Can't close fd %d", as);
		exit(100);
	}
	return (0);
}
/**
 * copy_files - copeis the files.
 * @filename: the first file.
 * @filen: the second one
 * Return: intger indicates the state of the program.
 */
ssize_t copy_files(char *filename, char *filen)
{
	size_t buffer_size = 1024, tbr = 0;
	ssize_t bt, bytes_write, fd, fdT;
	char *new_buffer;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char *buffer = malloc(buffer_size);

	if (!buffer)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	while ((bt = read(fd, buffer + tbr, buffer_size - tbr)) > 0)
	{
		tbr += bt;
		if (tbr == buffer_size)
		{
			buffer_size *= 2;
			buffer = realloc(buffer, buffer_size);
			if (!buffer)
			{
				free(buffer);
				close(fd);
				return (-1);
			}
		}
	}
	fdT = open(filen, O_RDONLY | O_CREAT | O_TRUNC, mode);
	bytes_write = write(fd, buffer, strlen(buffer));
	if (bytes_write == -1)
		return (-2);
	free(buffer);
	if (close(fd) != -1)
		close(fd);
	else
		return (fd);
	if (close(fdT) != -1)
		close(fdT);
	else
		return (fdT);
	return (1);
}
