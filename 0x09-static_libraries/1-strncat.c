#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @n: byte to stop at
 * @src: string to add
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, len1;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	len1 = 0;


	while (src[len1] != '\0' && len1 < n)
	{
		dest[len] = src[len1];
		len1++;
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
