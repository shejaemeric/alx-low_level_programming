#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - add 2 variavles
 *
 * @s: operation
 * Return: pointer to operation function
 */
int (*get_op_func(char *s))(int, int)
{

	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (*(ops[i].f));
		i++;
	}
	return (NULL);

}
