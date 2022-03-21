/**
 * puts2 - prints some chars
 * @str: arg1
 * Return: void
 */

void puts2(char *str)
{
	int i, count = 0;

	for (i = 0; i >= 0; i++)
	{
		if (i % 2 != 0)
			_putchar(s[i]);
		if (s[i] == '\0')
			break;
	}
	_putchar('\n');
}
