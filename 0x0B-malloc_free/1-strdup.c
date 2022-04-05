#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copy and duplicate a string
 * @str: string to be copied
 * Return: pointer to the array (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *a;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	a = (char *) malloc((len + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	i = 0;

	while (i < len)
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';

	return (a);
}
