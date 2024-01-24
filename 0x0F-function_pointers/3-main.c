#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - main function.
 * @argc: intger.
 * @argv: array.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int (*result_func)(int a, int b);
	int result;

	result_func = get_op_func(argv[2]);
	result = result_func(atoi(argv[1]), atoi(argv[3]));
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (result_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", result);
	return (0);
}
