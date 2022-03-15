#include "main.h"

/**
 * _isalpha - checks for alphabets either upper or lowercase
 * @c: c is to be checked
 * Return: 1 if an alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
