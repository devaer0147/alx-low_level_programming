#include "main.h"

/**
 * *_strncat - function that concatenates n byte to another
 * @dest: string to be concatenated to
 * @src: string to concatenate
 * @n: number of bytes to concatenate
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != src[n])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
