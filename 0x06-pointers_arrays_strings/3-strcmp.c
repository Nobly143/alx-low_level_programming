#include "main.h"

/**
 * _strcmp - compares 2 string
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 * Return: integer from comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, comp;

	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i == j)
		comp = 0;
	else
		comp = *s1 - *s2;
	return (comp);
}
