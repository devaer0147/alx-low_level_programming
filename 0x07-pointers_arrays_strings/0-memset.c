#include "main.h"

/**
 * _memset - function that fills the n byte
 * of memory with a consatn b
 * @s: pointer
 * @b: constant
 * @n: number of bytes to be filled
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;
	if (size > 0)
	{
		int i;
		for (i = 0; i < size; i++)
		     *(s + i) = b;
	}
	return (s);
}
