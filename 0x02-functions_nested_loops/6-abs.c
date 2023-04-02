#include "main.h"

/**
 * _abs - function that checks absolute
 * value of the given operand
 * @n: any given operand
 *
 * Return: integer value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	return (0);
}
