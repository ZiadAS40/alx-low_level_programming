#include <stdio.h>
#include <stdlib.h>
/**
 * mian - a function that multiply two numbers.
 * @argc: the number of arguments.
 * @argv: the arguments.
 * Return: 0.
 */
int mian(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
