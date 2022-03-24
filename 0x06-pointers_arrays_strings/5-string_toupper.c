#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @d: string to modify
 * Return: the resulting string
 */
char *string_toupper(char *d)
{
	int len;

	len = 0;

	while (d[len] != '\0')
	{
		if (d[len] >= 97 && d[len] <= 122)
		{
			d[len] = d[len] - 32;
		}
		len++;
	}
	return (d);
}

