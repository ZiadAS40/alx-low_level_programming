#include <stdio.h>
/**
 * main - functoin prints all the arguments that are passed to it.
 * @argc: the number of arguments
 * @argv: the arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
