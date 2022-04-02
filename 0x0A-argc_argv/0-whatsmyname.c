#include <stdio.h>

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
	printf("%s", argv[argc - argc]);
	printf("\n");
	return (0);
}
