#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a newline
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	j = len - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}

	_putchar('\n');
}
