#include "main.h"
#include <stdlib.h>

/**
 * * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string
 * @n: amount of bytes.
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, a = 0, c = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	a = n + i;

	p = malloc(sizeof(char) * (a + 1));

	if (p == NULL)
		return (NULL);

	while (c < a)
	{
		if (c < i)
			p[c] = s1[c];
		else
			p[c] = s2[c - i];
		c++;
	}
	p[c] = '\0';
	return (p);
}
