#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line a number of times
 * @n: number of times line to be printed
 * followed by a new line
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

