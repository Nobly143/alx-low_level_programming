#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Implements the program for a random number postive or negative
 * Return: 0 if Success or non-zero otherwise
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf ("The value of n is : %d\n",n);
	if (n > 0)
	{
		printf ("n is postive\n");
	}
	if (n == 0)
	{
		printf ("n is zero\n");
	}
	if (n < 0)
	{
		printf ("n is negative\n");
	}
	return (0);
}
