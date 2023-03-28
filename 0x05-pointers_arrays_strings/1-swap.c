#include "main.h"

/**
 * swap_int - function to swap the value from
 * parameter a to b
 * @a: first parameter to swap
 * @b: second to parameter to be swapped with
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
