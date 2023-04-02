#include "main.h"

/**
 * print_last_digit - function that reads a given
 * parameter and prints the last digit to stdout
 * @n: parameter to be read
 *
 * Return: int
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar('0' + (n % 10));
	return (n % 10);
}
