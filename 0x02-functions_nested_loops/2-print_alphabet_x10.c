#include "main.h"

/**
 * print_alphabet_x10 - print alpha
 * printing alphabets x10
 * Return: Always 0 (Success);
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
