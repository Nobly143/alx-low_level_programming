#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ap;

	for (ap = 'z'; ap >= 'a'; ap--)
	{
		putchar(ap);
	}
	putchar('\n');
	return (0);
}
