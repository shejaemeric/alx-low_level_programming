#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1 : arg1
 * @s2 : arg2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int count1 = 0, count2 = 0, i, a, b;

	for (i = 0; i >= 0; i++)
	{
		count1++;
		if (s1[i] == '\0')
			break;
	};

	for (i = 0; i >= 0; i++)
	{
		count2++;
		if (s2[i] == '\0')
			break;
	};

	if (count1 > count2)
		return (15);
	else if (count2 > count1)
		return (-15);
	else
	{
		for (i = 0; i < count1; i++)
		{
			a = s1[i];
			b = s2[i];
			if (a > b)
				return (-15);
			else if (b > a)
				return (15);
		}
		return (0);
	}
}
