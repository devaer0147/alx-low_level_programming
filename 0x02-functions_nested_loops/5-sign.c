#include "main.h"

/**
 * print_sign - check sign of operand using if else statement
 * @n: operand to be checked
 *
 * Description: the print_sign function determines
 * if the operand iis positve negatyive or otherwise
 * Return:To return 1 if +ive, 0 if operand is 0, and -1 if -ive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
