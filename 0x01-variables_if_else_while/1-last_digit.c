#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - Entry point
* testing last digits
* Return: Always 0 (success); 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit = n % 10;
	printf("Last digit of %i is ", n);
	if (lastdigit > 5)
	{
		printf("%i and is greater than 5\n", lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("%i and is 0\n", lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("%i and is less than 6 and not 0\n", lastdigit);
	}
	return (0);
}
