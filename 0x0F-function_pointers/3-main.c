#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */


int main(int argc, char **argv)
{
	int a, b, res;
	int (*func)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4 || argv[2][1] != '\0')
	{
		printf("Errornoop\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Errorimp\n");
		exit(100);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Errornull\n");
		exit(99);
	}

	res = func(a, b);
	printf("%d\n", res);
	return (0);
}
