#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: Always 0
 * Description: function prints numbers 0 - 9 followed by a new line
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
