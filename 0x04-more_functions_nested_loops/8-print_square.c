#include <stdio.h>
#include "main.h"

/**
 * print_square - draws a square on the terminal
 * @size: size of the square
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		a = 0;

		while (a < size)
		{
			b = 0;

			while (b < size)
			{
				_putchar(35);
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
