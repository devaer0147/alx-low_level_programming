#include "main.h"

/**
 * _puts - function that prints a string
 * followed by a new line to standard output
 * @str: parameter to be printed
 *
 * Retur: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
