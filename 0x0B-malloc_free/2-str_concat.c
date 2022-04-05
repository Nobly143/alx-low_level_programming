#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: base string
 * @s2: string to be added
 * Return: pointer to the array (Success), NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, j;
	char *a;

	len1 = 0;

	while (s1[len1] != '\0')
		len1++;

	len2 = 0;

	while (s2[len2] != '\0')
	{
		s1[len1] = s2[len2];
		len2++;
		len1++;
	}
	s1[len1] = '\0';

	a = (char *) malloc((len1 + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	j = 0;

	while (j < len1)
	{
		a[j] = s1[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
