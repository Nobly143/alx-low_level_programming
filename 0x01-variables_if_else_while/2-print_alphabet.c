#include <stdio.h>

/**
 * main - print alphabet in lower case 
 * followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
