#include "main.h"

/**
 * swap_int - updates the values of two variables
 * @a: pointer to the variable to swap
 * @b: pointer to the variable to swap
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
