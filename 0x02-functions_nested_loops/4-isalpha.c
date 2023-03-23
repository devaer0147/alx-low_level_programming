#include "main.h"

/**
 * _isalpha - check if isalpha
 * @c: operand to be checked
 * Return: 1 if check is true, 0 if otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
