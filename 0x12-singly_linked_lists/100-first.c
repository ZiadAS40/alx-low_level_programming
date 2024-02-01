#include <stdio.h>

/**
 * befor_main - prints befor the excution of the main function.
 *
 * Return: 0.
*/

void __attribute__ ((constructor)) befor_main()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
