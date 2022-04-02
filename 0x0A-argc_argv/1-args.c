#include <stdio.h>
#include "main.h"

/**
 * main - writes the character c to stdout
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d", (argc - 1));
	printf("\n");
	return (0);
}
