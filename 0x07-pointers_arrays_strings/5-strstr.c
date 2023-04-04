#include "main.h"

/**
 * _strstr -function that locates and returns
 * pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0, y, z;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[x] != '\0')
	{
		if (haystack[x] == needle[0])
		{
			z = x, y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[z] == needle[y])
					z++, y++;
				else
					break;
			}
			if (needle[y] == '\0')
			{
				return (haystack + x);
			}
		}
		x++;
	}
	return (0);
}
