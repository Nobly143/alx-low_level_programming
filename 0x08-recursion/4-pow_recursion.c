#include "main.h"

/**
 * _pow_recursion - raise a number
 * @x: number to be raised
 * @y: power x is raised to
 * Return: x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
