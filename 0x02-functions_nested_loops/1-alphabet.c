#include "main.h"

/**
 * print_alphabet - print alphabet in lower case followed by a newline
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
