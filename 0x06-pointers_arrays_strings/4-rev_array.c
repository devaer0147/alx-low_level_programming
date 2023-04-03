#include "main.h"

/**
 * reverse_array - function that reverses the
 * content of an array of integers
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{

	int temp, beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		temp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = temp;
		beg++, end--;
	}
}
