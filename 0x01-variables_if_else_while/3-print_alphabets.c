#include <stdio.h>

/**
 * main - Entry point
 * printing alphabets
 * Return: Always 0 (success);
*/
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A' ; A <= 'Z' ; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
