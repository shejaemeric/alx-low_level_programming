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

int main(int argc, char *argv[])
{
	int i, num, res = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (!num)
		{
			printf("Error");
			printf("\n");
			return (1);
		}
		res = res + num;
	}
	printf("%d", res);
	printf("\n");
	return (0);
}
