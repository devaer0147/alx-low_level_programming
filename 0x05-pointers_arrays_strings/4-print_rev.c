#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		++s;
	}

	s--;

	for (i = count; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
