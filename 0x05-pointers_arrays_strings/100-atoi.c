#include "main.h"
/**
 * _atoi - find a number
 * @s: arg1
 * Return: void
 */
int _atoi(char *s)
{
	int i, n, count = 0;
//////////////
	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if ((s[i] >=48 && s[i] <= 57) || s[i] == 45 || s[i] == 43){

		}
	}
	return (num);
}
