#include <stdio.h>
/**
 * mian - a function that multiply two numbers.
 * @argc: the number of arguments.
 * @argv: the arguments.
 * Return: 0.
 */
int mian(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	if (argc >= 3)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	return (0);
}
