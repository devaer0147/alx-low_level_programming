#include "main.h"

/**
 * more_numbers - prints more number
 *
 * Return: void
 * Description: function prints number 0-14 10 times
 */
void more_numbers(void)
{
	int a;
	int counter;

	for (counter = '0'; counter <= '9'; counter++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a / 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
