#include "main.h"

/**
* main - prints _putchar
* Return: 0
*/

int main(void)
{
	char str[10] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\', 'n'};
	int i = 0;

	while (i < 10)
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
