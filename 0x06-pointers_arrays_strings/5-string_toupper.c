#include "main.h"

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *s)
{

	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= 'a' && s[n] <= 'z')
			s[n] = s[n] - 'a' + 'A';
	}
	return (s);
}
