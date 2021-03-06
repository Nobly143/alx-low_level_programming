#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	b = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (b == NULL)
		return (0);

	i = 0;

	while (i < size)
	{
		b[i] = c;
		i++;
	}

	b[i] = '\0';
	return (b);
}
