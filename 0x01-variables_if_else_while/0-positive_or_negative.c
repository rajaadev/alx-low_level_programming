#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* The last digit */
/**
 * main -  Entry point of the program
 * This function is the entry point
 * of the program and is responsible for
 * starting the execution of the program
 * It initializes any necessary resources
 * and then calls other functions as needed.
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
