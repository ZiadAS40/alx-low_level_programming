#include <stdio.h>
/**
 * main - a function that prints the file name.
 * @argc: the number of arguments.
 * @argv: an array that contains the arguments.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", argv[0]);
	return (0);
}
