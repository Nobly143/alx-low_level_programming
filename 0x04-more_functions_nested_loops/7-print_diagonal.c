#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonals n times
 * @n: number of times diagonal would be printed
 * followed by a new line
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == a)
				{
					_putchar(92);
				}
				else if (b < a)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
