#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that multiply two numbers.
 * @argc: the number of arguments.
 * @argv: the arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
