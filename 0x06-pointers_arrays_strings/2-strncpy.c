#include "main.h"

/**
 * _strncpy - function that copies content from src to dest
 * @dest: destination to be copied to
 * @src: source to be copied
 * @n: n bytes
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
