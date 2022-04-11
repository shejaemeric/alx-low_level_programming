#include "main.h"
/**
 * main - A function that creates an array of chars,
 * Return: 0
 */

int main(void)
{
	int i;

	char s[] = __FILE__;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
