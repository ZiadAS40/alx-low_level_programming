#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
* get_op_func - determine which process to perform.
* @s: operator.
* Return: a pointer to function.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (i < 6)
{
if (ops[i].op[0] == s[0])
return (ops[i].f);
i++;
}
return (NULL);
}
