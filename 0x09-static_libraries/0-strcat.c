#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len, len1;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	len1 = 0;

	while (src[len1] != '\0')
	{
		dest[len] = src[len1];
		len1++;
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
