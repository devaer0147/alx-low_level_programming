#include <stdio.h>

/**
 * main - Entry point
 * printing alphabets
 * Return: Always 0 (success);
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
