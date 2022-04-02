#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes the character c to stdout
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}

	res = atoi(argv[1]) *  atoi(argv[2]);
	printf("%d", res);
	printf("\n");
	return (0);
}
