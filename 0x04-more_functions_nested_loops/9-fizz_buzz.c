#include <stdio.h>

/**
*fizzbuzz- prints fizz buzz
*Return: void
*/

void fizzbuzz(void)
{
	int c = 1;

	while (c <= 10)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("fizz buzz ");
		}
		else if (c % 3 == 0)
		{
			printf("fizz ");
		}
		else if (c % 5 == 0)
		{
			printf("buzz ");
		}
		else
		{
		    printf("%d ", c);
		}
		c++;
	}
}

/**
*main- main function
*Return: int
*/

int main(void)
{
	fizzbuzz();
	return (0);
}
