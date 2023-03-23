#include "main.h"

/**
 * _islower - cheching for lower case
 * @c: operand to be checked
 * Return: return 1 if true, otherwise 0.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
