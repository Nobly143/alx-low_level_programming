#include <stdio.h>
/**
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");
	return (0);
}
