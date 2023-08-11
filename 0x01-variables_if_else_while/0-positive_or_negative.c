#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determine if a numberis positive, negative or zero
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Number: %d\n", n);

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

    return (0);
}
