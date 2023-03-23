#include "main.h"

/**
 * main - print alpha
 * printing alphabets
 * Return: Always 0 (Success);
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
