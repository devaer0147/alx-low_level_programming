#include "main.h"

/**
 * _strlen - function that reads and return the lenght
 * of given parameter
 * @s: parameter to be read
 *
 * Return: length of param
 */
int _strlen(char *s)
{	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
