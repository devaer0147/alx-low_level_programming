#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers
 * from n - 98 irrespective if n is greater than 98 or less than.
 * @n: parameter n
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}

