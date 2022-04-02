#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a, b;

	a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		b = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
				b = 1;
			}
		}
		if (b == 0)
		{
			return (a);
		}
	}
	return (0);
}
