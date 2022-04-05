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
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *a;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
	{
		len2++;
	}

	a = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			a[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			a[i] = s2[j];
			i++;
			j++;
		}
	}
	a[i] = '\0';
	return (a);
}
