#include "function_pointers.h"

/**
 * int_index - executes a function given as a parameter
 * that compares an integer
 * @array: array to iterate over
 * @size: size of the array
 * @cmp: pointer to function used
 * Return: The array that matches or -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp != 0)
				return (i);
		}
	}
	return (-1);
}
