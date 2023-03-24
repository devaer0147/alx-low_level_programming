#include "main.h"

/**
 * print_line - prints line
 * @n: operational operand
 *
 * Return: void
 * Description: function draws straight line in terminal
 */
void print_line(int n)
{
	char l = '_';

	while (n > 0)
	{
		l++;
		_putchar(l);
	}
	_putchar('\n');
}

