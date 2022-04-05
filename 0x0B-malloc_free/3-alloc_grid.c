#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for  (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			free(a);
			for (j = 0; j <= i; j++)
				free(a[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
