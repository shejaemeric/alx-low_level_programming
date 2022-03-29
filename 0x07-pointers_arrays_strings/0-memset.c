#include "main.h"

/**
 * _memset - concatenates n bytes of two strings
 * @s: arg 1
 * @b: arg 2
 * @n: arg 3
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
    int i;

    for(i = 0; i < n;i++)
    {
        *s = b;
        s++;
    }
    return s;
}